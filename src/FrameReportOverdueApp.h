#ifndef FRAMEREPORTOVERDUEAPP_H
#define FRAMEREPORTOVERDUEAPP_H

#include "DialogSaveFileApp.h"
#include <wx/wx.h>
#include <wx/print.h>
#include <wx/printdlg.h>
#include "CustomPrintout.h"
class FrameReportOverdueApp : public FrameReportOverdue
{
    public:

        FrameReportOverdueApp(wxFrame * parent, Library * l_val);

        bool Show(bool show = true);
        void update();
        void exit(wxCloseEvent & event);

        void btnBackClicked(wxCommandEvent & event);
        void btnPreviousClicked(wxCommandEvent & event);
        void btnNextClicked(wxCommandEvent & event);
        void btnSaveClicked(wxCommandEvent & event);
		void btnPrintClicked(wxCommandEvent & event);
    protected:

    private:

        Library * l;
        deque<Instance *> instances;
        deque<struct tm *> deadlines;
        int current_page;
        int max_page;

};

#endif // FRAMEREPORTOVERDUEAPP_H
