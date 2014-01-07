#ifndef FRAMEBORROWERAPP_H
#define FRAMEBORROWERAPP_H

#include <algorithm>
#include "Functions.h"
#include "FrameCreateEditBorrowerApp.h"
#include "DialogSaveFileApp.h"
#include <iostream>
#include <wx/wx.h>
#include <wx/print.h>
#include <wx/printdlg.h>
#include "CustomPrintout.h"

using namespace std;

class FrameBorrowerApp : public FrameBorrower
{
    public:

        FrameBorrowerApp(wxWindow* parent, Library * l_val);

        bool Show(bool Show = true);
        void update();
        void exit(wxCloseEvent & event);

        void btnBackBorrowerClicked(wxCommandEvent & event);
        void btnNextBorrowerClicked(wxCommandEvent & event);
        void btnPreviousBorrowerClicked(wxCommandEvent & event);
        void btnAddBorrowerClicked(wxCommandEvent & event);
        void btnEditBorrowerClicked(wxCommandEvent & event);
        void btnDeleteBorrowerClicked(wxCommandEvent & event);
        void sortOptionChanged(wxCommandEvent & event);
        void btnSaveClicked(wxCommandEvent & event);
		void btnPrintClicked(wxCommandEvent & event);
        void cellLeftClick(wxGridEvent & event);

        void sortByItemsBorrowing();

    protected:

    private:

        Library * l = NULL;
        int selected_row;
        int current_page;
        int max_page;
		
};

#endif // FRAMEBORROWERAPP_H
