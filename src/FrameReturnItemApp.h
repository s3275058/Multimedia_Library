#ifndef FRAMERETURNITEMAPP_H
#define FRAMERETURNITEMAPP_H

#include "Library.h"
#include "noname.h"
#include "Functions.h"

class FrameReturnItemApp : public FrameReturnItem
{
    public:

        FrameReturnItemApp(wxFrame * parent, Library * l_val);

        void exit(wxCloseEvent & event);
        void btnConfirmReturnItemClicked(wxCommandEvent & event);
        void btnCancelReturnItemClicked(wxCommandEvent & event);
        void inputItemBarcodeReturn(wxKeyEvent & event);

    protected:

    private:

        Library * l;
        Borrower * b;
        Instance * in;
        int step;

};

#endif // FRAMERETURNITEMAPP_H
