#ifndef FRAMEINSTANCEAPP_H
#define FRAMEINSTANCEAPP_H

#include <algorithm>
#include "FrameCreateEditInstanceApp.h"
#include "DialogSaveFileApp.h"
#include <wx/wx.h>
#include <wx/print.h>
#include <wx/printdlg.h>
#include "CustomPrintout.h"

class FrameInstanceApp : public FrameInstance
{
    public:

        FrameInstanceApp(wxWindow * parent, wxFrame * previous_frame_val,
                         Library * l_val, bool update_status, bool report_val,
                         int collection_id_val, string title_val,
                         string author_val, bool borrowed, bool overdue);

        bool Show(bool Show = true);
        void update();
        void exit(wxCloseEvent & event);

        void btnBackInstanceClicked(wxCommandEvent & event);
        void btnHomeInstanceCicked(wxCommandEvent & event);
        void btnAddInstanceClicked(wxCommandEvent & event);
        void btnEditInstanceClicked(wxCommandEvent & event);
        void btnDeleteInstanceClicked(wxCommandEvent & event);
        void btnPreviousInstanceClicked(wxCommandEvent & event);
        void btnNextInstanceClicked(wxCommandEvent & event);
        void sortOptionChanged(wxCommandEvent & event);
        void btnSaveClicked(wxCommandEvent & event);
		void btnPrintClicked(wxCommandEvent & event);
        void cellLeftClick(wxGridEvent & event);

    protected:

    private:

        wxFrame * previous_frame = NULL;
        Library * l = NULL;
        deque<Collection *> collections;
        deque<Instance *> instances;
        bool report;
        int collection_id;
        string title;
        string author;
        int selected_row;
        int current_page;
        int max_page;
};

#endif // FRAMEINSTANCEAPP_H
