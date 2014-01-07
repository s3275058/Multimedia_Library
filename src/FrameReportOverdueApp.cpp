#include "FrameReportOverdueApp.h"

FrameReportOverdueApp::FrameReportOverdueApp(wxFrame * parent, Library * l_val) : FrameReportOverdue(parent), l(l_val), current_page(1)
{
    tbl_borrower->SetSelectionMode(wxGrid::wxGridSelectRows);

    for (unsigned int i = 0; i < l->instances->size(); ++i)
    {
        Instance * in = l->instances->at(i);
        if (in->getStatus() == 1)
        {
            time_t now = time(0);
            struct tm * deadline = new struct tm;
            memcpy(deadline, in->getBorrowDate(), sizeof(struct tm));
            deadline->tm_mday += in->getNumDays();
            time_t temp = mktime(deadline);
            if (difftime(now, temp) > 0)
            {
                instances.push_back(in);
                deadlines.push_back(localtime(& temp));
            }
        }
    }
}

bool FrameReportOverdueApp::Show(bool show)
{
    current_page = 1;
    update();
    return FrameReportOverdue::Show(show);
}

void FrameReportOverdueApp::update()
{
    tbl_borrower->ClearGrid();
    tbl_borrower->ClearSelection();

    if (instances.size() <= 10)
    {
        max_page = 1;
    }

    else
    {
        max_page = (instances.size() - 1) / 10 + 1;
    }

    setPagingButtons(btn_previous, btn_next, current_page, max_page);

    for (int i = 1; i <= 10; ++i)
    {
        ostringstream oss;
        oss << i + (current_page - 1) * 10;
        wxString label(oss.str());
        tbl_borrower->SetRowLabelValue(i - 1, label);
    }

    if (current_page <= max_page)
    {
        int count = 0;
        int row_num = 0;

        for (unsigned int i = 0; i < instances.size() && count < 10 * current_page; ++i)
        {
            Instance * in = instances[i];

            if (row_num == 10)
            {
                tbl_borrower->ClearGrid();
                row_num = 0;
            }

            wxString id;
            id << in->getBorrower();
            tbl_borrower->SetCellValue(row_num, 0, id);

            wxString barcode;
            barcode << in->getBarcode();
            tbl_borrower->SetCellValue(row_num, 1, barcode);

            for (unsigned int j = 0; j < l->borrowers->size(); ++j)
            {
                Borrower * b = l->borrowers->at(j);
                if (* b == in->getBorrower())
                {
                    tbl_borrower->SetCellValue(row_num, 2, wxString(b->getName()));
                    tbl_borrower->SetCellValue(row_num, 3, wxString(b->getMobileNumber()));
                    break;
                }
            }

            char deadline_string[15];
            strftime(deadline_string, 15, "%d/%m/%Y", deadlines[i]);
            wxString deadline(deadline_string);
            tbl_borrower->SetCellValue(row_num, 4, deadline);

            ++count;
            ++row_num;
        }
    }
}

void FrameReportOverdueApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameReportOverdueApp::btnBackClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameReportOverdueApp::btnPreviousClicked(wxCommandEvent & event)
{
    tablePaging(true, & current_page);
}

void FrameReportOverdueApp::btnNextClicked(wxCommandEvent & event)
{
    tablePaging(false, & current_page);
}

void FrameReportOverdueApp::btnPrintClicked(wxCommandEvent & event)
{	
	CustomPrintout * cp = new CustomPrintout(wxT("Overdue report"),30,l, NULL,  & instances, & deadlines);
	if (!cp->performPageSetup(true))
    {
        // user cancelled
        std::cout<<"ERROR printer\n";
	}
	wxPrintDialogData data(cp->getPrintData());
  	wxPrinter printer(&data);
	const bool success = printer.Print(NULL, cp, true /* show dialog */);
	 
	if (!success)
	{
	    std::cout << "Failed!!\n";
	    return;
	}
	delete cp;
}

void FrameReportOverdueApp::btnSaveClicked(wxCommandEvent & event)
{
    DialogSaveFileApp * dsfa = new DialogSaveFileApp(this, l, NULL, & instances, & deadlines);
    dsfa->ShowModal();
}
