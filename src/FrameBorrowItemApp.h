#ifndef FRAMEBORROWITEMAPP_H
#define FRAMEBORROWITEMAPP_H

#include "Library.h"
#include "noname.h"
#include "Functions.h"

class FrameBorrowItemApp : public FrameBorrowItem
{
    public:

        FrameBorrowItemApp(wxFrame * parent, Library * l_val);

        void exit(wxCloseEvent & event);
        void btnConfirmBorrowClicked(wxCommandEvent & event);
        void btnCancelBorrowClicked(wxCommandEvent & event);
        void inputBorrowerID(wxKeyEvent & event);
        void inputItemBarcodeBorrow(wxKeyEvent & event);
        void inputBorrowDays(wxKeyEvent & event);

    protected:

    private:

        Library * l = NULL;
        Borrower * b = NULL;
        Instance * in = NULL;
        int step;

};

#endif // FRAMEBORROWITEMAPP_H
