#include "FrameBorrowItemApp.h"

FrameBorrowItemApp::FrameBorrowItemApp(wxFrame * parent, Library * l_val) : FrameBorrowItem(parent), l(l_val), step(1)
{
    lbl_borrower_name->Hide();
    lbl_collection_name->Hide();
    lbl_item_barcode->Hide();
    lbl_borrow_days->Hide();
    txt_borrower_name->Hide();
    txt_collection_name->Hide();
    txt_item_barcode->Hide();
    txt_borrow_days->Hide();
}

void FrameBorrowItemApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameBorrowItemApp::btnConfirmBorrowClicked(wxCommandEvent & event)
{
    if (step == 1)
    {
        string borrower_id_string = txt_borrower_id->GetValue().ToStdString();
        showError(strcmp(borrower_id_string.c_str(), "") != 0, lbl_error_borrower_id, "Please enter the borrower ID!");

        if (strcmp(borrower_id_string.c_str(), "") != 0)
        {
            istringstream iss_borrower_id(borrower_id_string);
            int borrower_id;
            iss_borrower_id >> borrower_id;

            bool valid = false;
            for (unsigned int i = 0; i < l->borrowers->size(); ++i)
            {
                b = l->borrowers->at(i);
                if (* b == borrower_id)
                {
                    valid = true;
                    break;
                }
            }
            string error_string = "Cannot find a borrower with ID ";
            error_string.append(borrower_id_string);
            error_string.append("!");
            showError(valid, lbl_error_borrower_id, error_string);

            if (valid)
            {
                lbl_borrower_name->Show();
                wxString borrower_name(b->getName());
                txt_borrower_name->SetLabel(borrower_name);
                txt_borrower_name->Show();
                ++step;
            }
        }
    }

    else if (step == 2)
    {
        lbl_item_barcode->Show();
        txt_item_barcode->Show();
        txt_item_barcode->SetFocus();
        ++step;
    }

    else if (step == 3)
    {
        string item_barcode_string = txt_item_barcode->GetValue().ToStdString();
        showError(strcmp(item_barcode_string.c_str(), "") != 0, lbl_error_item_barcode, "Please enter the item barcode!");

        if (strcmp(item_barcode_string.c_str(), "") != 0)
        {
            istringstream iss_item_barcode(item_barcode_string);
            int item_barcode;
            iss_item_barcode >> item_barcode;

            bool valid = false;
            for (unsigned int i = 0; i < l->instances->size(); ++i)
            {
                in = l->instances->at(i);
                if (* in == item_barcode)
                {
                    valid = true;
                    break;
                }
            }
            string error_string = "Cannot find an item with barcode ";
            error_string.append(item_barcode_string);
            error_string.append("!");
            showError(valid, lbl_error_item_barcode, error_string);

            if (valid)
            {
                showError(in->getStatus() != 1, lbl_error_item_barcode, "This item is already borrowed!");

                if (in->getStatus() != 1)
                {

                    lbl_collection_name->Show();
                    Collection * c = NULL;
                    for (unsigned int i = 0; i < l->collections->size(); ++i)
                    {
                        c = l->collections->at(i);
                        if (* c == in->getCollection())
                        {
                            break;
                        }
                    }
                    wxString collection_name(c->getTitle());
                    txt_collection_name->SetLabel(collection_name);
                    txt_collection_name->Show();
                    ++step;
                }
            }
        }
    }

    else if (step == 4)
    {
        lbl_borrow_days->Show();
        txt_borrow_days->Show();
        txt_borrow_days->SetFocus();
        ++step;
    }

    else
    {
        string days_string = txt_borrow_days->GetValue().ToStdString();
        showError(strcmp(days_string.c_str(), "") != 0, lbl_error_borrow_days, "Please enter the number of borrow days!");
        if (strcmp(days_string.c_str(), "") != 0)
        {
            int days_num;
            istringstream iss_days_num(days_string);
            iss_days_num >> days_num;
            time_t now = time(0);
           // struct tm * borrow_date;
            //memcpy(borrow_date, localtime(& now), sizeof(struct tm));
            l->editInstance(in, b->getID(), 1, in->getBorrowTimes() + 1, days_num, localtime(& now));
            l->editBorrower(b, b->getName(), b->getType(), b->getDepartment(), b->getMobileNumber(), b->getNumItemsBorrowed() + 1, b->getNumItemsLate());
            switchFrame(this, GetParent());
        }
    }
}

void FrameBorrowItemApp::btnCancelBorrowClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameBorrowItemApp::inputBorrowerID(wxKeyEvent & event)
{
    allowInteger(event);
}

void FrameBorrowItemApp::inputItemBarcodeBorrow(wxKeyEvent & event)
{
    allowInteger(event);
}

void FrameBorrowItemApp::inputBorrowDays(wxKeyEvent & event)
{
    allowInteger(event);
}
