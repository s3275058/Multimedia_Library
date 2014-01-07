#include "FrameReturnItemApp.h"

FrameReturnItemApp::FrameReturnItemApp(wxFrame * parent, Library * l_val) : FrameReturnItem(parent), l(l_val), step(1)
{
    lbl_days_late->Hide();
    txt_days_late->Hide();
}

void FrameReturnItemApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameReturnItemApp::btnConfirmReturnItemClicked(wxCommandEvent & event)
{
    int days_late = 0;

    if (step == 1)
    {
        string barcode_string = txt_item_barcode_return->GetValue().ToStdString();
        showError(strcmp(barcode_string.c_str(), "") != 0, lbl_error_item_barcode_return, "Please enter the item barcode!");

        if (strcmp(barcode_string.c_str(), "") != 0)
        {
            istringstream iss_barcode(barcode_string);
            int barcode;
            iss_barcode >> barcode;

            bool valid = false;
            for (unsigned int i = 0; i < l->instances->size(); ++i)
            {
                in = l->instances->at(i);
                if (barcode == in->getBarcode())
                {
                    valid = true;
                    break;
                }
            }
            string error_string = "Cannot find an item with barcode ";
            error_string.append(barcode_string);
            error_string.append("!");
            showError(valid, lbl_error_item_barcode_return, error_string);

            if (valid)
            {
                showError(in->getStatus() == 1, lbl_error_item_barcode_return, "This item is not being borrowed!");

                if(in->getStatus() == 1)
                {
                    lbl_days_late->Show();
                    time_t now = time(0);
                    time_t borrow_date = mktime(in->getBorrowDate());
                    days_late = difftime(now, borrow_date) / (60 * 60 * 24);

                    if (days_late <= in->getNumDays())
                    {
                        wxString days_text("0");
                        txt_days_late->SetLabel(days_text);
                    }

                    else
                    {
                        days_late -= in->getNumDays();
                        ostringstream oss;
                        oss << days_late;
                        wxString days_text(oss.str());
                        txt_days_late->SetLabel(days_text);
                    }

                    txt_days_late->Show();
                    ++step;
                }
            }
        }
    }

    else
    {
        for (unsigned int i = 0; i < l->borrowers->size(); ++i)
        {
            b = l->borrowers->at(i);
            if (* b == in->getBorrower())
            {
                break;
            }
        }
        l->editInstance(in, in->getBorrower(), 3, in->getBorrowTimes(), 0, NULL);
        if (days_late > 0)
        {
            l->editBorrower(b, b->getName(), b->getType(), b->getDepartment(), b->getMobileNumber(), b->getNumItemsBorrowed(), b->getNumItemsLate() + 1);
        }
        switchFrame(this, GetParent());
    }
}

void FrameReturnItemApp::btnCancelReturnItemClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameReturnItemApp::inputItemBarcodeReturn(wxKeyEvent & event)
{
    allowInteger(event);
}
