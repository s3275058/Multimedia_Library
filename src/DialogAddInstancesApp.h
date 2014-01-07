#ifndef DIALOGADDINSTANCESAPP_H
#define DIALOGADDINSTANCESAPP_H

#include "FrameCreateEditInstanceApp.h"

class DialogAddInstancesApp : public DialogAddInstances
{
    public:

        DialogAddInstancesApp(wxWindow * parent, Library * l_val, Collection * c_val, wxFrame * previous_frame_val);

        void exit(wxCloseEvent & event);
        void btnYesAddInstanceClicked(wxCommandEvent & event);
        void btnNoAddInstanceClicked(wxCommandEvent & event);

    protected:

    private:

        Library * l = NULL;
        Collection * c = NULL;
        wxFrame * previous_frame = NULL;

};

#endif // DIALOGADDINSTANCESAPP_H
