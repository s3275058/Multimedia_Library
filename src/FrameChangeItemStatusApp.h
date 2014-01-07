#ifndef FRAMECHANGEITEMSTATUSAPP_H
#define FRAMECHANGEITEMSTATUSAPP_H

#include "FrameInstanceApp.h"

class FrameChangeItemStatusApp : public FrameChangeItemStatus
{
    public:

        FrameChangeItemStatusApp(wxFrame * parent, Library * l_val);

        void exit(wxCloseEvent & event);
        void btnConfirmChangeClicked(wxCommandEvent & event);
        void btnCancelChangeClicked(wxCommandEvent & event);
        void inputItemBarcodeChange(wxKeyEvent & event);
        void inputTitleChange(wxCommandEvent & event);
        void inputAuthorChange(wxCommandEvent & event);
        void updateTitleAuthor(wxCommandEvent & event);

    protected:

    private:

        Library * l;
        int search_choice;
};

#endif // FRAMECHANGEITEMSTATUSAPP_H
