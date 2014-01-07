#ifndef FRAMEREPORTINSTANCEAPP_H
#define FRAMEREPORTINSTANCEAPP_H

#include "FrameInstanceApp.h"

class FrameReportInstanceApp : public FrameReportInstance
{
    public:

        FrameReportInstanceApp(wxFrame * parent, Library * l);

        void exit(wxCloseEvent & event);
        void btnBackClicked(wxCommandEvent & event);
        void btnReportClicked(wxCommandEvent & event);
        void overdueChanged(wxCommandEvent & event);

    protected:

    private:

        Library * l;

};

#endif // FRAMEREPORTINSTANCEAPP_H
