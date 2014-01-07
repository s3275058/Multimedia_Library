#ifndef FRAMEDOWNLOADAPP_H
#define FRAMEDOWNLOADAPP_H

#include <dirent.h>
#include <deque>
#include "Functions.h"
#include "DialogDownloadLocationApp.h"

using namespace std;

class FrameDownloadApp : public FrameDownload
{
    public:

        FrameDownloadApp(wxFrame * parent);
        void exit(wxCloseEvent & event);

        void btnBackClicked(wxCommandEvent & event);
        void reportChosen(wxCommandEvent & event);
        void btnDownloadClicked(wxCommandEvent & event);

    protected:

    private:

};

#endif // FRAMEDOWNLOADAPP_H
