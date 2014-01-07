#include "DialogDownloadLocationApp.h"

DialogDownloadLocationApp::DialogDownloadLocationApp(wxFrame * parent,
                                                     string file_name_val) : DialogDownloadLocation(parent),
                                                                                file_name(file_name_val) {}

void DialogDownloadLocationApp::exit(wxCloseEvent & event)
{
    Destroy();
}

void DialogDownloadLocationApp::locationSelected(wxFileDirPickerEvent & event)
{
    btn_ok->Enable();
}

void DialogDownloadLocationApp::btnOKClicked(wxCommandEvent & event)
{
    string file_source = "./reports/";
    file_source.append(file_name);
    ifstream source(file_source);
    filebuf * buffer = source.rdbuf();

    string file_destination = dpk_location->GetPath().ToStdString();
    file_destination.append("\\");
    file_destination.append(file_name);
    ofstream destination(file_destination);

    destination << buffer;
    source.close();
    destination.close();
    Destroy();
}

void DialogDownloadLocationApp::btnCancelClicked(wxCommandEvent & event)
{
    Destroy();
}
