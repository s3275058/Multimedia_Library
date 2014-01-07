#ifndef DIALOGDELETEERRORAPP_H
#define DIALOGDELETEERRORAPP_H

#include <string>
#include "noname.h"

using namespace std;

class DialogDeleteErrorApp : public DialogDeleteError
{
    public:

        DialogDeleteErrorApp(wxFrame * parent, string message);

        void exit(wxCloseEvent & event);
        void btnOKClicked(wxCommandEvent & event);

    protected:

    private:
};

#endif // DIALOGDELETEERRORAPP_H
