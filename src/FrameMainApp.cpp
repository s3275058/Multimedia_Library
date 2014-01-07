#include "FrameMainApp.h"
#include <wx/richtext/richtextprint.h>

FrameMainApp::FrameMainApp(wxWindow* parent, Library * l_val) : FrameMain(parent), l(l_val) {}

void FrameMainApp::btnCollectionClicked(wxCommandEvent & event)
{
    FrameCollectionApp * fca = new FrameCollectionApp(this, this, l);
    switchFrame(this, fca);
}

void FrameMainApp::btnBorrowerClicked(wxCommandEvent & event)
{
    FrameBorrowerApp * fba = new FrameBorrowerApp(this, l);
    switchFrame(this, fba);
}

void FrameMainApp::btnBorrowItemClicked(wxCommandEvent & event)
{
    FrameBorrowItemApp * fbia = new FrameBorrowItemApp(this, l);
    switchFrame(this, fbia);
}

void FrameMainApp::btnReturnItemClicked(wxCommandEvent & event)
{
    FrameReturnItemApp * fria = new FrameReturnItemApp(this, l);
    switchFrame(this, fria);
}

void FrameMainApp::btnChangeItemStatusClicked(wxCommandEvent & event)
{
    FrameChangeItemStatusApp * fcis = new FrameChangeItemStatusApp(this, l);
    switchFrame(this, fcis);
}

void FrameMainApp::btnReportCollectionClicked(wxCommandEvent & event)
{
    FrameReportCollectionApp * frca = new FrameReportCollectionApp(this, l);
    switchFrame(this, frca);
}

void FrameMainApp::btnReportInstanceClicked(wxCommandEvent & event)
{
    FrameReportInstanceApp * fria = new FrameReportInstanceApp(this, l);
    switchFrame(this, fria);
}

void FrameMainApp::btnReportOverdueClicked(wxCommandEvent & event)
{
    FrameReportOverdueApp * froa = new FrameReportOverdueApp(this, l);
    switchFrame(this, froa);
}

void FrameMainApp::btnDownloadClicked(wxCommandEvent & event)
{
    FrameDownloadApp * fda = new FrameDownloadApp(this);
    switchFrame(this, fda);
}
