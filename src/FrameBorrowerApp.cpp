#include "FrameBorrowerApp.h"

FrameBorrowerApp::FrameBorrowerApp(wxWindow* parent, Library * l_val) : FrameBorrower(parent), l(l_val),
                                                                        selected_row(-1), current_page(1)
{
    tbl_borrower->SetSelectionMode(wxGrid::wxGridSelectRows);
}

bool FrameBorrowerApp::Show(bool show)
{
    current_page = 1;
    update();
    return FrameBorrower::Show(show);
}

void FrameBorrowerApp::update()
{
    tbl_borrower->ClearGrid();
    tbl_borrower->ClearSelection();

    btn_edit_borrower->Disable();
    btn_delete_borrower->Disable();

    if (choice_sort_instance->GetSelection() == 0)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByBorrowerIDAsc);
        }
        else
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByBorrowerIDDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 1)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByBorrowerNameAsc);
        }
        else
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByBorrowerNameDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 2)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByBorrowerTypeAsc);
        }
        else
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByBorrowerTypeDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 3)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByDepartmentAsc);
        }
        else
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByDepartmentDsc);
        }
    }

    else if (choice_sort_instance->GetSelection() == 4)
    {
        sortByItemsBorrowing();
    }

    else if (choice_sort_instance->GetSelection() == 5)
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByItemsBorrowedAsc);
        }
        else
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByItemsBorrowedDsc);
        }
    }

    else
    {
        if (rdb_order->GetSelection() == 0)
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByItemsLateAsc);
        }
        else
        {
            sort(l->borrowers->begin(), l->borrowers->end(), sortByItemsLateDsc);
        }
    }

    if (l->borrowers->size() <= 10)
    {
        max_page = 1;
    }

    else
    {
        max_page = (l->borrowers->size() - 1) / 10 + 1;
    }

    setPagingButtons(btn_previous_borrower, btn_next_borrower, current_page, max_page);

    for (int i = 1; i <= 10; ++i)
    {
        ostringstream oss;
        oss << i + (current_page - 1) * 10;
        wxString label(oss.str());
        tbl_borrower->SetRowLabelValue(i - 1, label);
    }

    if (current_page <= max_page)
    {
        int count = 0;
        int row_num = 0;

        for (unsigned int i = 0; i < l->borrowers->size() && count < 10 * current_page; ++i)
        {
            Borrower * b = l->borrowers->at(i);

            if (row_num == 10)
            {
                tbl_borrower->ClearGrid();
                row_num = 0;
            }

            wxString borrower_id;
            borrower_id << b->getID();
            tbl_borrower->SetCellValue(row_num, 0, borrower_id);

            wxString name(b->getName());
            tbl_borrower->SetCellValue(row_num, 1, name);

            wxString type(borrower_types[b->getType() - 1]);
            tbl_borrower->SetCellValue(row_num, 2, type);

            wxString department(departments[b->getDepartment() - 1]);
            tbl_borrower->SetCellValue(row_num, 3, department);

            wxString mobile_num;
            mobile_num << b->getMobileNumber();
            tbl_borrower->SetCellValue(row_num, 4, mobile_num);

            wxString items_borrowing;
            items_borrowing << l->findNumberOfItemsBorrowing(b);
            tbl_borrower->SetCellValue(row_num, 5, items_borrowing);

            wxString item_borrowed;
            item_borrowed << b->getNumItemsBorrowed();
            tbl_borrower->SetCellValue(row_num, 6, item_borrowed);

            wxString items_late;
            items_late << b->getNumItemsLate();
            tbl_borrower->SetCellValue(row_num, 7, items_late);

            ++count;
            ++row_num;
        }
    }
}

void FrameBorrowerApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
{
    GetParent()->Close();
    }
}

void FrameBorrowerApp::btnBackBorrowerClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameBorrowerApp::btnAddBorrowerClicked(wxCommandEvent & event)
{
    FrameCreateEditBorrowerApp * fceba = new FrameCreateEditBorrowerApp(GetParent(), l, -1, this);
    switchFrame(this, fceba);
}

void FrameBorrowerApp::btnEditBorrowerClicked(wxCommandEvent & event)
{
    istringstream iss_borrower_id(tbl_borrower->GetCellValue(selected_row, 0).ToStdString());
    int borrower_id;
    iss_borrower_id >> borrower_id;
    FrameCreateEditBorrowerApp * fceba = new FrameCreateEditBorrowerApp(GetParent(), l, borrower_id, this);
    switchFrame(this, fceba);
}

void FrameBorrowerApp::btnDeleteBorrowerClicked(wxCommandEvent & event)
{
    if (showConfirmDialog(this, "borrower"))
    {
        stringstream iss_borrower_id(tbl_borrower->GetCellValue(selected_row, 0).ToStdString());
        int borrower_id;
        iss_borrower_id >> borrower_id;
        if (!l->deleteBorrower(borrower_id))
        {
            showErrorDialog(this);
        }
        update();
    }
}

void FrameBorrowerApp::btnPreviousBorrowerClicked(wxCommandEvent & event)
{
    tablePaging(true, & current_page);
    update();
}

void FrameBorrowerApp::btnNextBorrowerClicked(wxCommandEvent & event)
{
    tablePaging(false, & current_page);
    update();
}

void FrameBorrowerApp::sortOptionChanged(wxCommandEvent & event)
{
    current_page = 1;
    update();
}

void FrameBorrowerApp::btnSaveClicked(wxCommandEvent & event)
{
    DialogSaveFileApp * dsfa = new DialogSaveFileApp(this, l, NULL, NULL, NULL);
    dsfa->ShowModal();
}
void FrameBorrowerApp::btnPrintClicked(wxCommandEvent & event)
{
	CustomPrintout * cp = new CustomPrintout(wxT("Borrower report"),30,l, NULL, NULL, NULL );
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
void FrameBorrowerApp::cellLeftClick(wxGridEvent & event)
{
    tableCellLeftClick(& selected_row, tbl_borrower, event, btn_edit_borrower, btn_delete_borrower);
}

void FrameBorrowerApp::sortByItemsBorrowing()
{
    for (unsigned int i = 1; i < l->borrowers->size(); ++i)
    {
        if (rdb_order->GetSelection() == 0)
        {
            if (l->findNumberOfItemsBorrowing(l->borrowers->at(i)) < l->findNumberOfItemsBorrowing(l->borrowers->at(i - 1)))
            {
                for (unsigned int j = i; j >= 1; --j)
                {
                    Borrower * first = l->borrowers->at(j);
                    Borrower * second = l->borrowers->at(j - 1);

                    if (l->findNumberOfItemsBorrowing(first) < l->findNumberOfItemsBorrowing(second))
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
            if (l->findNumberOfItemsBorrowing(l->borrowers->at(i)) > l->findNumberOfItemsBorrowing(l->borrowers->at(i - 1)))
            {
                for (unsigned int j = i; j >= 1; --j)
                {
                    Borrower * first = l->borrowers->at(j);
                    Borrower * second = l->borrowers->at(j - 1);

                    if (l->findNumberOfItemsBorrowing(first) > l->findNumberOfItemsBorrowing(second))
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
