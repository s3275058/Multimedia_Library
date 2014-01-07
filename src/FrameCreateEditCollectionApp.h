#ifndef FRAMECREATEEDITCOLLECTIONAPP_H
#define FRAMECREATEEDITCOLLECTIONAPP_H

#include "DialogAddInstancesApp.h"

class FrameCreateEditCollectionApp : public FrameCreateEditCollection
{
    public:

        FrameCreateEditCollectionApp(wxWindow* parent, Library * l_val, int collection_id, wxFrame * previous_frame_val);

        void exit(wxCloseEvent & event);
        void btnBackCreateCollectionClicked(wxCommandEvent & event);
        void btnHomeCreateCollectionClicked(wxCommandEvent & event);
        void btnOKCollectionClicked(wxCommandEvent & event);
        void inputDuration(wxKeyEvent & event);

    protected:

    private:

        Library * l = NULL;
        Collection * c = NULL;
        wxFrame * previous_frame = NULL;

};

#endif // FRAMECREATEEDITCOLLECTIONAPP_H
