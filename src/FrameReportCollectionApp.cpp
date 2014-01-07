#include "FrameReportCollectionApp.h"

FrameReportCollectionApp::FrameReportCollectionApp(wxFrame * parent, Library * l_val) : FrameReportCollection(parent), l(l_val)
{
    for (int i = 0; i < COLLECTION_TYPES_SIZE; ++i)
    {
        choice_collection_type->Append(collection_types[i]);
    }
    for (int i = 0; i < DATA_TYPES_SIZE; ++i)
    {
        choice_data_type->Append(data_types[i]);
    }
    for (int i = 0; i < CATEGORIES_SIZE; ++i)
    {
        choice_category->Append(categories[i]);
    }
}

void FrameReportCollectionApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameReportCollectionApp::btnBackClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameReportCollectionApp::btnGetReportClicked(wxCommandEvent & event)
{
    FrameCollectionApp * fca = new FrameCollectionApp(GetParent(), this, l, true, choice_collection_type->GetSelection(), choice_data_type->GetSelection(), choice_category->GetSelection());
    switchFrame(this, fca);
}
