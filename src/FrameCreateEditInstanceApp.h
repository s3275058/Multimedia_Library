#ifndef FRAMECREATEEDITINSTANCEAPP_H
#define FRAMECREATEEDITINSTANCEAPP_H

#include "Library.h"
#include "noname.h"
#include "Functions.h"

class FrameCreateEditInstanceApp : public FrameCreateEditInstance
{
    public:

        FrameCreateEditInstanceApp(wxWindow * parent, Library * l_val, Collection * c_val, int barcode, wxFrame * previous_frame_val);

        void exit(wxCloseEvent & event);
        void btnBackCreateInstanceClicked(wxCommandEvent & event);
        void btnHomeCreateInstanceClicked(wxCommandEvent & event);
        void btnOKInstanceClicked(wxCommandEvent & event);
        void statusChanged(wxCommandEvent & event);
        void inputQuantity(wxKeyEvent & event);
        void inputBorrowTimes(wxKeyEvent & event);
        void inputNumDays(wxKeyEvent & event);

    protected:

    private:

        Library * l = NULL;
        Collection * c = NULL;
        Instance * in = NULL;
        wxFrame * previous_frame = NULL;
        string current_quantity;
};

#endif // FRAMECREATEEDITINSTANCEAPP_H
