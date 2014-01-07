#ifndef FRAMECOLLECTIONAPP_H
#define FRAMECOLLECTIONAPP_H

#include "FrameCreateEditCollectionApp.h"
#include "FrameInstanceApp.h"
#include "CustomPrintout.h"
#include <iostream>
#include <wx/wx.h>
#include <wx/print.h>
#include <wx/printdlg.h>


using namespace std;

class FrameCollectionApp : public FrameCollection
{
    public:

        FrameCollectionApp(wxWindow* parent, wxFrame * previous_frame_val,
                           Library * l_val, bool report_val = false,
                           int collection_type_val = 0, int data_type_val = 0,
                           int category_val = 0);

        bool Show(bool Show = true);
        void update();
        void exit(wxCloseEvent & event);

        void btnBackCollectionClicked(wxCommandEvent & event);
        void btnAddCollectionClicked(wxCommandEvent & event);
        void btnViewInstancesClicked(wxCommandEvent & event);
        void btnEditCollectionClicked(wxCommandEvent & event);
        void btnDeleteCollectionClicked(wxCommandEvent & event);
        void btnPreviousCollectionClicked(wxCommandEvent & event);
        void btnNextCollectionClicked(wxCommandEvent & event);
        void sortOptionChanged(wxCommandEvent & event);
        void btnSaveClicked(wxCommandEvent & event);
        void btnPrintClicked(wxCommandEvent & event);

        void cellLeftClick(wxGridEvent & event);

        void sortByNumInstances();

    protected:

    private:

        wxFrame * previous_frame = NULL;
        Library * l = NULL;
        deque<Collection *> collections;
        bool report;
        int collection_type;
        int data_type;
        int category;
        int selected_row;
        int current_page;
        int max_page;
        CustomPrintout * cp;
};


#endif // FRAMECOLLECTIONAPP_H
