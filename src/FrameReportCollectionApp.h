#ifndef FRAMEREPORTCOLLECTIONAPP_H
#define FRAMEREPORTCOLLECTIONAPP_H

#include "FrameCollectionApp.h"

class FrameReportCollectionApp : public FrameReportCollection
{
    public:

        FrameReportCollectionApp(wxFrame * parent, Library * l_val);

        void exit(wxCloseEvent & event);
        void btnBackClicked(wxCommandEvent & event);
        void btnGetReportClicked(wxCommandEvent & event);

    protected:

    private:

        Library * l;

};

#endif // FRAMEREPORTCOLLECTIONAPP_H
