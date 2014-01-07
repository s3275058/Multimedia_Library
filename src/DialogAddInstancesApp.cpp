#include "DialogAddInstancesApp.h"

DialogAddInstancesApp::DialogAddInstancesApp(wxWindow* parent, Library * l_val, Collection * c_val, wxFrame * previous_frame_val) : DialogAddInstances(parent), l(l_val), c(c_val), previous_frame(previous_frame_val) {}

void DialogAddInstancesApp::exit(wxCloseEvent & event)
{
    switchFrame(this, previous_frame);
}

void DialogAddInstancesApp::btnYesAddInstanceClicked(wxCommandEvent & event)
{
    FrameCreateEditInstanceApp * fceia = new FrameCreateEditInstanceApp(GetParent(), l, c, -1, previous_frame);
    switchFrame(this, fceia);
}

void DialogAddInstancesApp::btnNoAddInstanceClicked(wxCommandEvent & event)
{
    switchFrame(this, previous_frame);
}
