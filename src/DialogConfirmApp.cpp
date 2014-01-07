#include "DialogConfirmApp.h"

DialogConfirmApp::DialogConfirmApp(wxFrame * parent, string message) : DialogConfirm(parent), result(false)
{
    string s = "Do you want to ";

    if (strcmp(message.c_str(), "collection") == 0)
    {
        s.append("delete this collection?");
    }

    else if (strcmp(message.c_str(), "instance") == 0)
    {
        s.append("delete this instance?");
    }

    else if (strcmp(message.c_str(), "borrower") == 0)
    {
        s.append("delete this borrower?");
    }

    else
    {
        s.append("exit?");
    }

    lbl_confirm_message->SetLabel(wxString(s));
}

void DialogConfirmApp::exit(wxCloseEvent & event)
{
    Destroy();
}

void DialogConfirmApp::btnYesClicked(wxCommandEvent & event)
{
    result = true;
    Destroy();
}

void DialogConfirmApp::btnNoClicked(wxCommandEvent & event)
{
    Destroy();
}
