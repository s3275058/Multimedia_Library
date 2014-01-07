#include "FrameChangeItemStatusApp.h"

FrameChangeItemStatusApp::FrameChangeItemStatusApp(wxFrame * parent, Library * l_val) : FrameChangeItemStatus(parent), l(l_val), search_choice(0) {}

void FrameChangeItemStatusApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameChangeItemStatusApp::btnConfirmChangeClicked(wxCommandEvent & event)
{
    Instance * in = NULL;
    showError(search_choice != 0, lbl_error_change_item, "Please enter the item barcode or the collection title or the collection author!");

    if (search_choice != 0)
    {
        if (search_choice == 1)
        {
            string barcode_string = txt_item_barcode_change->GetValue().ToStdString();
            int barcode;
            istringstream iss_barcode(barcode_string);
            iss_barcode >> barcode;

            bool valid = false;
            for (unsigned int i = 0; i < l->instances->size(); ++i)
            {
                in = l->instances->at(i);
                if (* in == barcode)
                {
                    valid = true;
                    break;
                }
            }
            string error_string = "Cannot find an item with barcode ";
            error_string.append(barcode_string);
            error_string.append("!");
            showError(valid, lbl_error_item_barcode_change, error_string);

            if (valid)
            {
                FrameCreateEditInstanceApp * fceia = new FrameCreateEditInstanceApp(GetParent(), l, NULL, barcode, this);
                switchFrame(this, fceia);
            }
        }

        else
        {
            FrameInstanceApp * fia = NULL;

            if (search_choice == 2)
            {
                fia = new FrameInstanceApp(GetParent(), this, l, true, false, -1, txt_title_change->GetValue().ToStdString(), "", false, false);
            }

            else
            {
                fia = new FrameInstanceApp(GetParent(), this, l, true, false, -1, "", txt_author_change->GetValue().ToStdString(), false, false);
            }

            switchFrame(this, fia);
        }
    }
}

void FrameChangeItemStatusApp::btnCancelChangeClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameChangeItemStatusApp::inputItemBarcodeChange(wxKeyEvent & event)
{
    allowInteger(event);
}

void FrameChangeItemStatusApp::inputTitleChange(wxCommandEvent & event)
{
    if (txt_title_change->GetValue().length() > 0)
    {
        txt_author_change->Disable();
        lbl_error_author_change->SetLabel(wxEmptyString);
        search_choice = 2;
    }
    else
    {
        txt_author_change->Enable();
        search_choice = 0;
    }
}

void FrameChangeItemStatusApp::inputAuthorChange(wxCommandEvent & event)
{
    if (txt_author_change->GetValue().length() > 0)
    {
        search_choice = 3;
    }
    else
    {
        search_choice = 0;
    }
}

void FrameChangeItemStatusApp::updateTitleAuthor(wxCommandEvent & event)
{
    if (txt_item_barcode_change->GetValue().length() > 0)
    {
        txt_title_change->Disable();
        txt_author_change->Disable();
        lbl_error_title_change->SetLabel(wxEmptyString);
        lbl_error_author_change->SetLabel(wxEmptyString);
        search_choice = 1;
    }
    else
    {
        txt_title_change->Enable();
        txt_author_change->Enable();
        search_choice = 0;
    }
}
