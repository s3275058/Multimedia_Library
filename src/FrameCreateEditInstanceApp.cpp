#include "FrameCreateEditInstanceApp.h"

FrameCreateEditInstanceApp::FrameCreateEditInstanceApp(wxWindow * parent, Library * l_val, Collection * c_val, int barcode, wxFrame * previous_frame_val) : FrameCreateEditInstance(parent), l(l_val), c(c_val), previous_frame(previous_frame_val), current_quantity("")
{
    string label = "";
    int num_statuses = 0;

    if (barcode == -1)
    {
        lbl_borrow_times->Hide();
        lbl_num_days->Hide();
        txt_borrow_times->Hide();
        txt_num_days->Hide();
        num_statuses = STATUSES_SIZE - 2;
        label = "Add instances for ";
        label.append(c->getTitle());
        label.append(" (ID: ");
        ostringstream oss;
        oss << c->getID();
        label.append(oss.str());
        label.append(")");
    }

    else
    {
        lbl_quantity->Hide();
        txt_quantity->Hide();
        for (unsigned int i = 0; i < l->instances->size(); ++i)
        {
            Instance * temp = l->instances->at(i);
            if (* temp == barcode)
            {
                in = temp;
                break;
            }
        }

        wxString instance_barcode;
        instance_barcode << in->getBarcode();
        txt_barcode->SetLabel(instance_barcode);

        wxString borrow_times;
        borrow_times << in->getBorrowTimes();
        txt_borrow_times->SetValue(borrow_times);

        if (in->getStatus() == 1)
        {
            wxString days;
            days << in->getNumDays();
            txt_num_days->SetValue(days);
        }

        else
        {
            txt_num_days->Disable();
        }
    }

    for (int i = num_statuses; i < STATUSES_SIZE; ++i)
    {
        choice_status->Append(statuses[i]);
    }

    if (in != NULL)
    {
        if (in->getBorrower() != -1)
        {
            choice_status->SetSelection(1);
            choice_status->Disable();
        }

        else
        {
            choice_status->SetSelection(in->getStatus());
        }
    }

    lbl_instance_collection->SetLabel(wxString(label));
}

void FrameCreateEditInstanceApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameCreateEditInstanceApp::btnBackCreateInstanceClicked(wxCommandEvent & event)
{
    switchFrame(this, previous_frame);
}

void FrameCreateEditInstanceApp::btnHomeCreateInstanceClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameCreateEditInstanceApp::btnOKInstanceClicked(wxCommandEvent & event)
{
    int status = choice_status->GetSelection();
    showError(status != 0, lbl_error_status, "Please choose a status!");

    if (in == NULL)
    {
        string quantity_string = txt_quantity->GetValue().ToStdString();
        showError(strcmp(quantity_string.c_str(), "") != 0, lbl_error_quantity, "Please enter the quantity!");

        if (strcmp(quantity_string.c_str(), "") != 0 && status != 0)
        {

            istringstream iss_quantity(quantity_string);
            int quantity_num;
            iss_quantity >> quantity_num;

            for (int i = 0; i < quantity_num; ++i)
            {
                l->addInstance(c->getID(), status + 2);
            }

            switchFrame(this, previous_frame);
        }
    }

    else
    {
        string borrow_times = txt_borrow_times->GetValue().ToStdString();
        showError(strcmp(borrow_times.c_str(), "") != 0, lbl_error_quantity, "Please enter the borrow times!");

        string days = txt_num_days->GetValue().ToStdString();
        showError(status != 1 || (status == 1 && strcmp(days.c_str(), "") != 0), lbl_error_quantity, "Please enter the number of days!");

        if (strcmp(borrow_times.c_str(), "") != 0 && (status != 1 || (status == 1 && strcmp(days.c_str(), "") != 0)))
        {
            istringstream iss_borrow_times(borrow_times);
            int borrow_times_num;
            iss_borrow_times >> borrow_times_num;

            istringstream iss_days(days);
            int days_num;
            iss_days >> days_num;

            l->editInstance(in, in->getBorrower(), status, borrow_times_num, days_num, in->getBorrowDate());

            switchFrame(this, previous_frame);
        }
    }
}


void FrameCreateEditInstanceApp::statusChanged(wxCommandEvent & event)
{
    if (strcmp(choice_status->GetString(choice_status->GetSelection()).ToStdString().c_str(), "Borrowed") != 0)
    {
        wxString temp;
        temp << 0;
        txt_num_days->SetValue(temp);
        txt_num_days->Disable();
    }
    else
    {
        txt_num_days->Enable();
    }
}

void FrameCreateEditInstanceApp::inputQuantity(wxKeyEvent & event)
{
    allowPositiveInteger(txt_quantity, event);
}

void FrameCreateEditInstanceApp::inputBorrowTimes(wxKeyEvent & event)
{
    allowInteger(event);
}

void FrameCreateEditInstanceApp::inputNumDays(wxKeyEvent & event)
{
    allowPositiveInteger(txt_num_days, event);
}
