#include "FrameCreateEditBorrowerApp.h"

FrameCreateEditBorrowerApp::FrameCreateEditBorrowerApp(wxWindow* parent, Library * l_val, int borrower_id, wxFrame * previous_frame_val) : FrameCreateEditBorrower(parent), l(l_val), previous_frame(previous_frame_val), current_mobile("")
{
    for (int i = 0; i < BORROWER_TYPES_SIZE; ++i)
    {
        choice_borrower_type->Append(borrower_types[i]);
    }

    for (int i = 0; i < DEPARTMENTS_SIZE; ++i)
    {
        choice_department->Append(departments[i]);
    }

    if (borrower_id == -1)
    {
        lbl_borrower_id->Hide();
        lbl_items_borrowed->Hide();
        lbl_items_late->Hide();
        txt_items_borrowed->Hide();
        txt_items_late->Hide();
    }

    else
    {
        for (unsigned int i = 0; i < l->borrowers->size(); ++i)
        {
            Borrower * temp = l->borrowers->at(i);
            if (* temp == borrower_id)
            {
                b = temp;
                break;
            }
        }

        wxString id;
        id << b->getID();
        txt_borrower_id->SetLabel(id);

        choice_borrower_type->SetSelection(b->getType());

        choice_department->SetSelection(b->getDepartment());

        txt_name->SetValue(wxString(b->getName()));

        wxString mobile;
        mobile << b->getMobileNumber();
        txt_mobile_number->SetValue(mobile);

        wxString items_borrowed;
        items_borrowed << b->getNumItemsBorrowed();
        txt_items_borrowed->SetValue(items_borrowed);

        wxString items_late;
        items_late << b->getNumItemsLate();
        txt_items_late->SetValue(items_late);
    }
}

void FrameCreateEditBorrowerApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameCreateEditBorrowerApp::btnBackCreateBorrowerClicked(wxCommandEvent & event)
{
    switchFrame(this, previous_frame);
}

void FrameCreateEditBorrowerApp::btnHomeCreateBorrowerClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameCreateEditBorrowerApp::btnOKBorrowerClicked(wxCommandEvent & event)
{
    string name = txt_name->GetValue().ToStdString();
    showError(strcmp(name.c_str(), "") != 0, lbl_error_name, "Please enter the borrower name!");

    int borrower_type = choice_borrower_type->GetSelection();
    showError(borrower_type != 0, lbl_error_borrower_type, "Please choose a borrower type!");

    int department = choice_department->GetSelection();
    showError(department != 0, lbl_error_department, "Please choose a department!");

    string mobile = txt_mobile_number->GetValue().ToStdString();
    showError(strcmp(mobile.c_str(), "") != 0, lbl_error_mobile, "Please enter a mobile number!");

    if (b == NULL)
    {
        if (strcmp(name.c_str(), "") != 0 && borrower_type != 0 && department != 0 && strcmp(mobile.c_str(), "") != 0)
        {
            l->addBorrower(name, borrower_type, department, mobile);
            switchFrame(this, previous_frame);
        }
    }

    else
    {
        string items_borrowed = txt_items_borrowed->GetValue().ToStdString();
        showError(strcmp(items_borrowed.c_str(), "") != 0, lbl_error_items_borrowed, "Please enter the number of items borrowed!");

        string items_late = txt_items_late->GetValue().ToStdString();
        showError(strcmp(items_late.c_str(), "") != 0, lbl_error_items_late, "Please enter the number of items returned late!");

        if (strcmp(items_late.c_str(), "") != 0 && strcmp(items_borrowed.c_str(), "") != 0)
        {
            istringstream iss_borrow(items_borrowed);
            int items_borrowed_num;
            iss_borrow >> items_borrowed_num;

            istringstream iss_late(items_late);
            int items_late_num;
            iss_late >> items_late_num;

            l->editBorrower(b, name, borrower_type, department, mobile, items_borrowed_num, items_late_num);

            switchFrame(this, previous_frame);
        }
    }
}


void FrameCreateEditBorrowerApp::inputName(wxKeyEvent & event)
{
    allowAlphabetSpace(event);
}

void FrameCreateEditBorrowerApp::inputMobile(wxKeyEvent & event)
{
    allowPositiveInteger(txt_mobile_number, event);
}

void FrameCreateEditBorrowerApp::inputItemsBorrowed(wxKeyEvent & event)
{
    allowInteger(event);
}

void FrameCreateEditBorrowerApp::inputItemsLate(wxKeyEvent & event)
{
    allowInteger(event);
}
