#include "FrameReportInstanceApp.h"

FrameReportInstanceApp::FrameReportInstanceApp(wxFrame * parent, Library * l_val) : FrameReportInstance(parent), l(l_val) {}

void FrameReportInstanceApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameReportInstanceApp::btnBackClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameReportInstanceApp::btnReportClicked(wxCommandEvent & event)
{
    string collection_id = txt_collection_id->GetValue().ToStdString();
    int id = -1;
    bool valid = true;

    if (strcmp(collection_id.c_str(), "") != 0)
    {
        valid = false;
        istringstream iss(collection_id);
        iss >> id;
        for (unsigned int i = 0; i < l->collections->size(); ++i)
        {
            if (* (l->collections->at(i)) == id)
            {
                valid = true;
                break;
            }
        }
    }

    string error_message = "Cannot find the collection with ID ";
    error_message.append(collection_id);
    error_message.append("!");
    showError(valid, lbl_error_collection_id, error_message);

    if (valid)
    {
        FrameInstanceApp * fia = new FrameInstanceApp(GetParent(), this, l, false, true, id, "", "", cb_borrowed->IsChecked(), cb_overdue->IsChecked());
        switchFrame(this, fia);
    }
}

void FrameReportInstanceApp::overdueChanged(wxCommandEvent & event)
{
    if (cb_overdue->IsChecked())
    {
        cb_borrowed->Disable();
    }
    else
    {
        cb_borrowed->Enable();
    }
}
