#ifndef APPFRAMEMAIN_H
#define APPFRAMEMAIN_H

#include "FrameCollectionApp.h"
#include "FrameBorrowerApp.h"
#include "FrameBorrowItemApp.h"
#include "FrameReturnItemApp.h"
#include "FrameChangeItemStatusApp.h"
#include "FrameReportCollectionApp.h"
#include "FrameReportInstanceApp.h"
#include "FrameReportOverdueApp.h"
#include "FrameDownloadApp.h"

class FrameMainApp : public FrameMain
{
    public:

        FrameMainApp(wxWindow* parent, Library * l_val);

        void btnCollectionClicked(wxCommandEvent & event);
        void btnBorrowerClicked(wxCommandEvent & event);
        void btnBorrowItemClicked(wxCommandEvent & event);
        void btnReturnItemClicked(wxCommandEvent & event);
        void btnChangeItemStatusClicked(wxCommandEvent & event);
        void btnReportCollectionClicked(wxCommandEvent & event);
        void btnReportInstanceClicked(wxCommandEvent & event);
        void btnReportOverdueClicked(wxCommandEvent & event);
        void btnDownloadClicked(wxCommandEvent & event);

    protected:

    private:

        Library * l = NULL;

};

#endif // APPFRAMEMAIN_H
