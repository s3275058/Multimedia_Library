#include "FrameInstanceApp.h"

FrameInstanceApp::FrameInstanceApp(wxWindow * parent, wxFrame * previous_frame_val,
                                   Library * l_val, bool update_status,
                                   bool report_val, int collection_id_val,
                                   string title_val, string author_val,
                                   bool borrowed, bool overdue) : FrameInstance(parent), previous_frame(previous_frame_val),
                                                                    l(l_val), report(report_val), collection_id(collection_id_val),
                                                                    title(title_val), author(author_val), selected_row(-1), current_page(1)
{
    if (update_status || report)
    {
        btn_add_instance->Disable();
    }

    if (report)
    {
        for (unsigned int i = 0; i < l->instances->size(); ++i)
        {
            Instance * in = l->instances->at(i);

            if (overdue)
            {
                if (in->getStatus() == 1)
                {
                    time_t now = time(0);
                    time_t borrow_date = mktime(in->getBorrowDate());
                    int days = difftime(now, borrow_date) / (60 * 60 * 24);
                    if ((collection_id == -1 || in->getCollection() == collection_id) && days > in->getNumDays())
                    {
                        instances.push_back(in);
                    }
                }
            }

            else if (borrowed)
            {
                if ((collection_id == -1 || in->getCollection() == collection_id) && in->getStatus() == 1)
                {
                    instances.push_back(in);
                }
            }

            else
            {
                if ((collection_id == -1 || in->getCollection() == collection_id))
                {
                    instances.push_back(in);
                }
            }
        }
    }

    tbl_instance->SetSelectionMode(wxGrid::wxGridSelectRows);
}

bool FrameInstanceApp::Show(bool show)
{
    current_page = 1;
    update();
    return FrameInstance::Show(show);
}

void FrameInstanceApp::update()
{
    if (!report)
    {
        btn_save->Hide();
        btn_print->Hide();

        collections.clear();
        instances.clear();

        for (unsigned int i = 0; i < l->collections->size(); ++i)
        {
            Collection * c = l->collections->at(i);
            if (collection_id != -1)
            {
                if (* c == collection_id)
                {
                    collections.push_back(c);
                    string collection_name_id = collections[0]->getTitle();
                    collection_name_id.append(" (ID: ");
                    ostringstream oss;
                    oss << collections[0]->getID();
                    collection_name_id.append(oss.str());
                    collection_name_id.append(" )");
                    wxString label(collection_name_id);
                    lbl_collection_name->SetLabel(label);

                    break;
                }
            }

            else
            {
                if (strcmp(title.c_str(), "") != 0)
                {
                    if (c->getTitle().find(title) != string::npos)
                    {
                        collections.push_back(c);
                    }
                }

                else
                {
                    if (c->getAuthor().find(author) != string::npos)
                    {
                        collections.push_back(c);
                    }
                }

                int count = 0;
                for (unsigned int j = 0; j < l->instances->size(); ++j)
                {
                    for (unsigned int i = 0; i < collections.size(); ++i)
                    {
                        if (* collections[i] == l->instances->at(j)->getCollection())
                        {
                            ++count;
                            break;
                        }
                    }
                }

                string label = "Found ";
                ostringstream oss;
                oss << count;
                label.append(oss.str());
                label.append(" instances!");
                wxString message(label);
                lbl_collection_name->SetLabel(message);
            }
        }

        for (unsigned int i = 0; i < l->instances->size(); ++i)
        {
            Instance * in = l->instances->at(i);
            for (unsigned int j = 0; j < collections.size(); ++j)
            {
                if ( * (collections[j]) == in->getCollection())
                {
                    instances.push_back(in);
                    break;
                }
            }
        }
    }

    max_page = (instances.size() - 1) / 10 + 1;

    tbl_instance->ClearGrid();
    tbl_instance->ClearSelection();

    btn_edit_instance->Disable();
    btn_delete_instance->Disable();

    if (choice_sort_instance->GetSelection() == 0)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(instances.begin(), instances.end(), sortByBarcodeAsc);
        }
        else
        {
            sort(instances.begin(), instances.end(), sortByBarcodeDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 1)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(instances.begin(), instances.end(), sortByCollectionAsc);
        }
        else
        {
            sort(instances.begin(), instances.end(), sortByCollectionDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 2)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(instances.begin(), instances.end(), sortByStatusAsc);
        }
        else
        {
            sort(instances.begin(), instances.end(), sortByStatusDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 3)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(instances.begin(), instances.end(), sortByBorrowTimesAsc);
        }
        else
        {
            sort(instances.begin(), instances.end(), sortByBorrowTimesDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 4)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(instances.begin(), instances.end(), sortByCreationDateAsc);
        }
        else
        {
            sort(instances.begin(), instances.end(), sortByCreationDateDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 5)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(instances.begin(), instances.end(), sortByBorrowerAsc);
        }
        else
        {
            sort(instances.begin(), instances.end(), sortByBorrowerDsc);
        }
    }

    else
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(instances.begin(), instances.end(), sortByBorrowingDateAsc);
        }
        else
        {
            sort(instances.begin(), instances.end(), sortByBorrowingDateDsc);
        }
    }

    setPagingButtons(btn_previous_instance, btn_next_instance, current_page, max_page);

    for (int i = 1; i <= 10; ++i)
    {
        ostringstream oss;
        oss << i + (current_page - 1) * 10;
        wxString label(oss.str());
        tbl_instance->SetRowLabelValue(i - 1, label);
    }

    int count = 0;
    int row_num = 0;
    int max_page_count = 1;

    for (unsigned int j = 0; j < instances.size() && count < 10 * current_page; ++j)
    {
        Instance * in = instances[j];

        if (row_num == 10)
        {
            tbl_instance->ClearGrid();
            row_num = 0;
            max_page_count++;
        }

        wxString barcode;
        barcode << in->getBarcode();
        tbl_instance->SetCellValue(row_num, 0, barcode);

        wxString collection;
        collection << in->getCollection();
        tbl_instance->SetCellValue(row_num, 1, collection);

        wxString status(statuses[in->getStatus() - 1]);
        tbl_instance->SetCellValue(row_num, 2, status);

        wxString borrow_times;
        borrow_times << in->getBorrowTimes();
        tbl_instance->SetCellValue(row_num, 3, borrow_times);

        wxString num_days;
        num_days << in->getNumDays();
        tbl_instance->SetCellValue(row_num, 4, num_days);

        char create_date_string[15];
        strftime(create_date_string, 15, "%d/%m/%Y", in->getCreateDate());
        wxString create_date(create_date_string);
        tbl_instance->SetCellValue(row_num, 5, create_date);

        if (in->getStatus() == 1)
        {
            wxString borrower_id;
            borrower_id << in->getBorrower();
            tbl_instance->SetCellValue(row_num, 6, borrower_id);
            char borrow_date_string[15];
            strftime(borrow_date_string, 15, "%d/%m/%Y", in->getBorrowDate());
            wxString borrow_date(borrow_date_string);
            tbl_instance->SetCellValue(row_num, 7, borrow_date);
        }

        ++count;
        ++row_num;
    }
}



void FrameInstanceApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameInstanceApp::btnBackInstanceClicked(wxCommandEvent & event)
{
    switchFrame(this, previous_frame);
}

void FrameInstanceApp::btnHomeInstanceCicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameInstanceApp::btnAddInstanceClicked(wxCommandEvent & event)
{
    FrameCreateEditInstanceApp * fceia = new FrameCreateEditInstanceApp(GetParent(), l, collections[0], -1, this);
    switchFrame(this, fceia);
    current_page = 1;
}

void FrameInstanceApp::btnPrintClicked(wxCommandEvent & event)
{
	CustomPrintout * cp = new CustomPrintout(wxT("Instances report"),30,l, NULL, & instances, NULL );
	if (!cp->performPageSetup(true))
    {
        // user cancelled
        std::cout<<"ERROR printer\n";
	}
	wxPrintDialogData data(cp->getPrintData());
  	wxPrinter printer(&data);
	const bool success = printer.Print(NULL, cp, true /* show dialog */);
	 
	if (!success)
	{
	    std::cout << "Failed!!\n";
	    return;
	}
	delete cp;
}

void FrameInstanceApp::btnEditInstanceClicked(wxCommandEvent & event)
{
    istringstream iss_barcode(tbl_instance->GetCellValue(selected_row, 0).ToStdString());
    int barcode;
    iss_barcode >> barcode;
    FrameCreateEditInstanceApp * fceia = new FrameCreateEditInstanceApp(GetParent(), l, NULL, barcode, this);
    switchFrame(this, fceia);
}

void FrameInstanceApp::btnDeleteInstanceClicked(wxCommandEvent & event)
{
    if (showConfirmDialog(this, "instance"))
    {
        stringstream iss_barcode(tbl_instance->GetCellValue(selected_row, 0).ToStdString());
        int barcode;
        iss_barcode >> barcode;
        if (!l->deleteInstance(barcode))
        {
            showErrorDialog(this, "instance");
        }
        else
        {
            for (unsigned int i = 0; i < instances.size(); ++i)
            {
                if (* (instances[i]) == barcode)
                {
                    instances.erase(instances.begin() + i);
                }
            }
        }
        update();
    }
}

void FrameInstanceApp::btnPreviousInstanceClicked(wxCommandEvent & event)
{
    tablePaging(true, & current_page);
    update();
}

void FrameInstanceApp::btnNextInstanceClicked(wxCommandEvent & event)
{
    tablePaging(false, & current_page);
    update();
}

void FrameInstanceApp::sortOptionChanged(wxCommandEvent & event)
{
    current_page = 1;
    update();
}

void FrameInstanceApp::btnSaveClicked(wxCommandEvent & event)
{
    DialogSaveFileApp * dsfa = new DialogSaveFileApp(this, l, NULL, & instances, NULL);
    dsfa->ShowModal();
}

void FrameInstanceApp::cellLeftClick(wxGridEvent & event)
{
    tableCellLeftClick(& selected_row, tbl_instance, event, btn_edit_instance, btn_delete_instance);
}
