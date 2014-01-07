#include "FrameCollectionApp.h"

FrameCollectionApp::FrameCollectionApp(wxWindow * parent, wxFrame * previous_frame_val,
                                       Library * l_val, bool report_val,
                                       int collection_type_val, int data_type_val, int category_val) : FrameCollection(parent), previous_frame(previous_frame_val),
                                                                                                        l(l_val), report(report_val),
                                                                                                        collection_type(collection_type_val), data_type(data_type_val),
                                                                                                        category(category_val), selected_row(-1), current_page(1)
{
    tbl_collection->SetSelectionMode(wxGrid::wxGridSelectRows);
}

bool FrameCollectionApp::Show(bool show)
{
    current_page = 1;
    update();
    return FrameCollection::Show(show);
}

void FrameCollectionApp::update()
{
    if (!report)
    {
        collections = * (l->collections);
        btn_save->Hide();
        btn_print->Hide();
    }

    else
    {
        btn_add_collection->Hide();
        btn_edit_collection->Hide();
        btn_delete_collection->Hide();
        btn_view_instances->Hide();

        collections.clear();

        for (unsigned int i = 0; i < l->collections->size(); ++i)
        {
            Collection * c = l->collections->at(i);
            if ((collection_type == 0 || c->getCollectionType() == collection_type) && (data_type == 0 || c->getDataType() == data_type) && (category == 0 || c->getCategory() == category))
            {
                collections.push_back(c);
            }
        }
    }

    tbl_collection->ClearGrid();
    tbl_collection->ClearSelection();

    btn_view_instances->Disable();
    btn_edit_collection->Disable();
    btn_delete_collection->Disable();

    if (choice_sort_collection->GetSelection() == 0)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(collections.begin(), collections.end(), sortByCollectionIDAsc);
        }
        else
        {
            sort(collections.begin(), collections.end(), sortByCollectionIDDsc);
        }
    }

    else if (choice_sort_collection->GetSelection() == 1)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(collections.begin(), collections.end(), sortByTitleAsc);
        }
        else
        {
            sort(collections.begin(), collections.end(), sortByTitleDsc);
        }
    }

    else if (choice_sort_collection->GetSelection() == 2)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(collections.begin(), collections.end(), sortByAuthorAsc);
        }
        else
        {
            sort(collections.begin(), collections.end(), sortByAuthorDsc);
        }
    }

    else if (choice_sort_collection->GetSelection() == 3)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(collections.begin(), collections.end(), sortByPublisherAsc);
        }
        else
        {
            sort(collections.begin(), collections.end(), sortByPublisherDsc);
        }
    }

    else if (choice_sort_collection->GetSelection() == 4)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(collections.begin(), collections.end(), sortByYearAsc);
        }
        else
        {
            sort(collections.begin(), collections.end(), sortByYearDsc);
        }
    }

    else if (choice_sort_collection->GetSelection() == 5)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(collections.begin(), collections.end(), sortByDurationAsc);
        }
        else
        {
            sort(collections.begin(), collections.end(), sortByDurationDsc);
        }
    }

    else
    {
        sortByNumInstances();
    }

    if (l->collections->size() <= 10)
    {
        max_page = 1;
    }

    else
    {
        max_page = (l->collections->size() - 1) / 10 + 1;
    }

    setPagingButtons(btn_previous_collection, btn_next_collection, current_page, max_page);

    for (int i = 1; i <= 10; ++i)
    {
        ostringstream oss;
        oss << i + (current_page - 1) * 10;
        wxString label(oss.str());
        tbl_collection->SetRowLabelValue(i - 1, label);
    }

    if (current_page <= max_page)
    {
        int count = 0;
        int row_num = 0;

        for (unsigned int i = 0; i < collections.size() && count < 10 * current_page; ++i)
        {
            Collection * c = collections.at(i);

            if (row_num == 10)
            {
                tbl_collection->ClearGrid();
                row_num = 0;
            }

            wxString id;
            id << c->getID();
            tbl_collection->SetCellValue(row_num, 0, id);

            wxString title(c->getTitle());
            tbl_collection->SetCellValue(row_num, 1, title);

            wxString author(c->getAuthor());
            tbl_collection->SetCellValue(row_num, 2, author);

            wxString category(categories[c->getCategory() - 1]);
            tbl_collection->SetCellValue(row_num, 3, category);

            wxString collection_type(collection_types[c->getCollectionType() - 1]);
            tbl_collection->SetCellValue(row_num, 4, collection_type);

            wxString data_type(data_types[c->getDataType() - 1]);
            tbl_collection->SetCellValue(row_num, 5, data_type);

            wxString version(c->getVersion());
            tbl_collection->SetCellValue(row_num, 6, version);

            wxString publisher(c->getPublisher());
            tbl_collection->SetCellValue(row_num, 7, publisher);

            if (c->getYear() == 0)
            {
                wxString year("Before 1990");
                tbl_collection->SetCellValue(row_num, 8, year);
            }

            else
            {
                wxString year;
                year << c->getYear();
                tbl_collection->SetCellValue(row_num, 8, year);
            }

            wxString duration;
            duration << c->getDuration();
            tbl_collection->SetCellValue(row_num, 9, duration);

            wxString instances;
            instances << l->findNumberOfInstances(c);
            tbl_collection->SetCellValue(row_num, 10, instances);

            ++count;
            ++row_num;
        }
    }
}

void FrameCollectionApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameCollectionApp::btnBackCollectionClicked(wxCommandEvent & event)
{
    switchFrame(this, previous_frame);
}

void FrameCollectionApp::btnAddCollectionClicked(wxCommandEvent & event)
{
    FrameCreateEditCollectionApp * fceca = new FrameCreateEditCollectionApp(GetParent(), l, -1, this);
    switchFrame(this, fceca);
}

void FrameCollectionApp::btnViewInstancesClicked(wxCommandEvent & event)
{
    istringstream iss_collection_id(tbl_collection->GetCellValue(selected_row, 0).ToStdString());
    int collection_id;
    iss_collection_id >> collection_id;
    FrameInstanceApp * fia = new FrameInstanceApp(GetParent(), this, l, false, false, collection_id, "", "", false, false);
    switchFrame(this, fia);
}

void FrameCollectionApp::btnEditCollectionClicked(wxCommandEvent & event)
{
    istringstream iss_collection_id(tbl_collection->GetCellValue(selected_row, 0).ToStdString());
    int collection_id;
    iss_collection_id >> collection_id;
    FrameCreateEditCollectionApp * fceca = new FrameCreateEditCollectionApp(GetParent(), l, collection_id, this);
    switchFrame(this, fceca);
}

void FrameCollectionApp::btnDeleteCollectionClicked(wxCommandEvent & event)
{
    if (showConfirmDialog(this, "collection"))
    {
        stringstream iss_collection_id(tbl_collection->GetCellValue(selected_row, 0).ToStdString());
        int collection_id;
        iss_collection_id >> collection_id;

        if (!l->deleteCollection(collection_id))
        {
            showErrorDialog(this, "collection");
        }

        update();
    }
}

void FrameCollectionApp::btnPrintClicked(wxCommandEvent & event)
{
	cp = new CustomPrintout(wxT("Collection report"),30,l, & collections, NULL, NULL );
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
}

void FrameCollectionApp::btnPreviousCollectionClicked(wxCommandEvent & event)
{
    tablePaging(true, & current_page);
    update();
}

void FrameCollectionApp::btnNextCollectionClicked(wxCommandEvent & event)
{
    tablePaging(false, & current_page);
    update();
}

void FrameCollectionApp::sortOptionChanged(wxCommandEvent & event)
{
    current_page = 1;
    update();
}

void FrameCollectionApp::btnSaveClicked(wxCommandEvent & event)
{
    DialogSaveFileApp * dsfa = new DialogSaveFileApp(this, l, & collections, NULL, NULL);
    dsfa->ShowModal();
}

void FrameCollectionApp::cellLeftClick(wxGridEvent & event)
{
    tableCellLeftClick(& selected_row, tbl_collection, event, btn_edit_collection, btn_delete_collection);
    if (tbl_collection->GetCellValue(selected_row, 0).Cmp(wxEmptyString) != 0)
    {
        btn_view_instances->Enable();
    }
    else
    {
        btn_view_instances->Disable();
    }
}

void FrameCollectionApp::sortByNumInstances()
{
    for (unsigned int i = 1; i < collections.size(); ++i)
    {
        if (rdb_order->GetSelection() == 0)
        {
            if (l->findNumberOfInstances(collections[i]) < l->findNumberOfInstances(collections[i - 1]))
            {
                for (unsigned int j = i; j >= 1; --j)
                {
                    Collection * first = collections[j];
                    Collection * second = collections[j - 1];
                    if (l->findNumberOfInstances(first) < l->findNumberOfInstances(second))
                    {
                        swap(* first, * second);
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        else
        {
            if (l->findNumberOfInstances(collections[i]) > l->findNumberOfInstances(collections[i - 1]))
            {
                for (unsigned int j = i; j >= 1; --j)
                {
                    Collection * first = collections[j];
                    Collection * second = collections[j - 1];
                    if (l->findNumberOfInstances(first) > l->findNumberOfInstances(second))
                    {
                        swap(* first, * second);
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
}
