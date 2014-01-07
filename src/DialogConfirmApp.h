#ifndef DIALOGCONFIRMAPP_H
#define DIALOGCONFIRMAPP_H

#include <string>
#include "noname.h"

using namespace std;

class DialogConfirmApp : public DialogConfirm
{
    public:

        bool result;

        DialogConfirmApp(wxFrame * parent, string message);

        void exit(wxCloseEvent & event);
        void btnYesClicked(wxCommandEvent & event);
        void btnNoClicked(wxCommandEvent & event);

    protected:

    private:

};

#endif // DIALOGCONFIRMAPP_H
