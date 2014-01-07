#ifndef FRAMECREATEEDITBORROWERAPP_H
#define FRAMECREATEEDITBORROWERAPP_H

#include "Library.h"
#include "noname.h"
#include "Functions.h"

class FrameCreateEditBorrowerApp : public FrameCreateEditBorrower
{
public:

    FrameCreateEditBorrowerApp(wxWindow* parent, Library * l_val, int borrower_id, wxFrame * previous_frame_val);

    void exit(wxCloseEvent & event);
    void btnBackCreateBorrowerClicked(wxCommandEvent & event);
    void btnHomeCreateBorrowerClicked(wxCommandEvent & event);
    void btnOKBorrowerClicked(wxCommandEvent & event);
    void inputName(wxKeyEvent & event);
    void inputMobile(wxKeyEvent & event);
    void inputItemsBorrowed(wxKeyEvent & event);
    void inputItemsLate(wxKeyEvent & event);

protected:

private:

    Library * l = NULL;
    Borrower * b = NULL;
    wxFrame * previous_frame = NULL;
    string current_mobile;

};

#endif // FRAMECREATEEDITBORROWERAPP_H
