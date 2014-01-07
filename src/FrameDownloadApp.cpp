#include "FrameDownloadApp.h"

FrameDownloadApp::FrameDownloadApp(wxFrame * parent) : FrameDownload(parent)
{
    DIR * d = NULL;
    struct dirent * di = NULL;
    deque<string> file_names;

    d = opendir("./reports");
    do
    {
        di = readdir(d);
        if (di != NULL)
        {
            file_names.push_back(di->d_name);
        }
    } while (di != NULL);
    closedir(d);

    for (unsigned int i = 2; i < file_names.size(); ++i)
    {
        lst_report->Append(file_names[i]);
    }
}

void FrameDownloadApp::exit(wxCloseEvent & event)
{
    GetParent()->Close();
}

void FrameDownloadApp::btnBackClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameDownloadApp::reportChosen(wxCommandEvent & event)
{
    btn_download->Enable();
}

void FrameDownloadApp::btnDownloadClicked(wxCommandEvent & event)
{
    DialogDownloadLocationApp * ddla = new DialogDownloadLocationApp(this, lst_report->GetString(lst_report->GetSelection()).ToStdString());
    ddla->ShowModal();
}
