#include "DialogDeleteErrorApp.h"

DialogDeleteErrorApp::DialogDeleteErrorApp(wxFrame * parent, string message) : DialogDeleteError(parent)
{
    string s = "Failed to delete this ";

    if (strcmp(message.c_str(), "collection") == 0)
    {
        s.append("collection because some of its instances are being borrowed!");
    }

    else if (strcmp(message.c_str(), "instance") == 0)
    {
        s.append("instance because it is being borrowed!");
    }

    else
    {
        s.append("borrower because they are borrowing one or more items!");
    }
    lbl_delete_error->SetLabel(wxString(s));
}

void DialogDeleteErrorApp::exit(wxCloseEvent & event)
{
    Destroy();
}

void DialogDeleteErrorApp::btnOKClicked(wxCommandEvent & event)
{
    Destroy();
}
