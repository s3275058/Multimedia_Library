#ifndef DIALOGDOWNLOADLOCATIONAPP_H
#define DIALOGDOWNLOADLOCATIONAPP_H

#include <fstream>
#include <string>
#include "noname.h"

using namespace std;

class DialogDownloadLocationApp : public DialogDownloadLocation
{
    public:

        DialogDownloadLocationApp(wxFrame * parent, string file_name_val);

        void exit(wxCloseEvent & event);

        void locationSelected(wxFileDirPickerEvent & event);

        void btnOKClicked(wxCommandEvent & event);
        void btnCancelClicked(wxCommandEvent & event);

    protected:

    private:

        string file_name;
};

#endif // DIALOGDOWNLOADLOCATIONAPP_H
