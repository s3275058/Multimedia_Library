#include "Functions.h"
#include "Utility.h"

void switchFrame(wxWindow * current_frame, wxWindow * next_frame)
{
    next_frame->Show();
    next_frame->Center();
    current_frame->Hide();
}

bool showConfirmDialog(wxFrame * current_frame, string message)
{
    DialogConfirmApp * dca = new DialogConfirmApp(current_frame, message);
    dca->ShowModal();
    return dca->result;
}

void showErrorDialog(wxFrame * current_frame, string message)
{
    DialogDeleteErrorApp * ddea = new DialogDeleteErrorApp(current_frame, message);
    ddea->ShowModal();
}

void tablePaging(bool previous, int * current_page)
{
    if (previous)
    {
        --(* current_page);
    }
    else
    {
        ++(* current_page);
    }
}

void setPagingButtons(wxButton * previous_button, wxButton * next_button, int current_page, int max_page)
{
    if (current_page == 1)
    {
        previous_button->Disable();
    }
    else
    {
        previous_button->Enable();
    }

    if (max_page == 1 || current_page == max_page)
    {
        next_button->Disable();
    }
    else
    {
        next_button->Enable();
    }
}

void tableCellLeftClick(int * selected_row, wxGrid * table, wxGridEvent & event, wxButton * edit_button, wxButton * delete_button)
{
    * selected_row = event.GetRow();
    table->SelectRow(* selected_row);

    if (table->GetCellValue(* selected_row, 0).Cmp(wxEmptyString) != 0)
    {
        edit_button->Enable();
        delete_button->Enable();
    }
    else
    {
        edit_button->Disable();
        delete_button->Disable();
    }
}

void showError(bool valid, wxStaticText * error_label, string error_message)
{
    if (valid)
    {
        error_label->SetLabel(wxEmptyString);
    }
    else
    {
        wxString error(error_message);
        error_label->SetLabel(error);
    }
}

bool checkDeleteBackspaceArrow(int keyCode)
{
    if (keyCode == WXK_DELETE || keyCode == WXK_BACK || keyCode == WXK_LEFT || keyCode== WXK_RIGHT)
    {
        return true;
    }
    return false;
}

void allowPositiveInteger(wxTextCtrl * text_field, wxKeyEvent & event)
{
    wxChar input = event.GetUnicodeKey();
    if (input == 48)
    {
        if (strcmp(text_field->GetValue().ToStdString().c_str(), "") != 0)
        {
            long from;
            long to;
            text_field->GetSelection(& from, & to);
            string temp;
            string current_text = text_field->GetValue().ToStdString();
            temp = current_text.substr(0, from);
            temp.append(current_text.substr(to, strlen(current_text.c_str())));
            if (strcmp(temp.c_str(), "") != 0)
            {
                istringstream iss(temp);
                int current_duration;
                iss >> current_duration;
                if (current_duration != 0)
                {
                    event.Skip();
                }
            }
        }
    }
    else if ((48 < input && input <= 57) || checkDeleteBackspaceArrow(event.GetKeyCode()))
    {
        event.Skip();
    }
}

void allowInteger(wxKeyEvent & event)
{
    wxChar input = event.GetUnicodeKey();
    if ((48 <= input && input <= 57) || checkDeleteBackspaceArrow(event.GetKeyCode()))
    {
        event.Skip();
    }
}

void allowAlphabetSpace(wxKeyEvent & event)
{
    wxChar input = event.GetUnicodeKey();
    if ((65 <= input && input <= 90) || (97 <= input && input <= 122) || input == 32 || checkDeleteBackspaceArrow(event.GetKeyCode()))
    {
        event.Skip();
    }
}

bool sortByCollectionIDAsc(Collection * first, Collection * second)
{
    return first->getID() < second->getID();
}

bool sortByCollectionIDDsc(Collection * first, Collection * second)
{
    return first->getID() > second->getID();
}

bool sortByTitleAsc(Collection * first, Collection * second)
{
    return strcmp(first->getTitle().c_str(), second->getTitle().c_str()) < 0;
}

bool sortByTitleDsc(Collection * first, Collection * second)
{
    return strcmp(first->getTitle().c_str(), second->getTitle().c_str()) > 0;
}

bool sortByAuthorAsc(Collection * first, Collection * second)
{
    return strcmp(first->getAuthor().c_str(), second->getAuthor().c_str()) < 0;
}

bool sortByAuthorDsc(Collection * first, Collection * second)
{
    return strcmp(first->getAuthor().c_str(), second->getAuthor().c_str()) > 0;
}

bool sortByPublisherAsc(Collection * first, Collection * second)
{
    return strcmp(first->getPublisher().c_str(), second->getPublisher().c_str()) < 0;
}

bool sortByPublisherDsc(Collection * first, Collection * second)
{
    return strcmp(first->getPublisher().c_str(), second->getPublisher().c_str()) > 0;
}

bool sortByYearAsc(Collection * first, Collection * second)
{
    return first->getYear() < second->getYear();
}

bool sortByYearDsc(Collection * first, Collection * second)
{
    return first->getYear() > second->getYear();
}

bool sortByDurationAsc(Collection * first, Collection * second)
{
    return first->getDuration() < second->getDuration();
}

bool sortByDurationDsc(Collection * first, Collection * second)
{
    return first->getDuration() > second->getDuration();
}

bool sortByBarcodeAsc(Instance * first, Instance * second)
{
    return first->getBarcode() < second->getBarcode();
}

bool sortByBarcodeDsc(Instance * first, Instance * second)
{
    return first->getBarcode() > second->getBarcode();
}

bool sortByCollectionAsc(Instance * first, Instance * second)
{
    return first->getCollection() < second->getCollection();
}

bool sortByCollectionDsc(Instance * first, Instance * second)
{
    return first->getCollection() > second->getCollection();
}

bool sortByStatusAsc(Instance * first, Instance * second)
{
    return strcmp(statuses[first->getStatus() - 1].c_str(), statuses[second->getStatus() - 1].c_str()) < 0;
}

bool sortByStatusDsc(Instance * first, Instance * second)
{
    return strcmp(statuses[first->getStatus() - 1].c_str(), statuses[second->getStatus() - 1].c_str()) > 0;
}

bool sortByBorrowTimesAsc(Instance * first, Instance * second)
{
    return first->getBorrowTimes() < second->getBorrowTimes();
}

bool sortByBorrowTimesDsc(Instance * first, Instance * second)
{
    return first->getBorrowTimes() > second->getBorrowTimes();
}

bool sortByCreationDateAsc(Instance * first, Instance * second)
{
    return difftime(mktime(first->getCreateDate()), mktime(second->getCreateDate())) < 0;
}

bool sortByCreationDateDsc(Instance * first, Instance * second)
{
    return difftime(mktime(first->getCreateDate()), mktime(second->getCreateDate())) > 0;
}

bool sortByBorrowerAsc(Instance * first, Instance * second)
{
    return first->getBorrower() < second->getBorrower();
}

bool sortByBorrowerDsc(Instance * first, Instance * second)
{
    return first->getBorrower() > second->getBorrower();
}

bool sortByBorrowingDateAsc(Instance * first, Instance * second)
{
    return difftime(mktime(first->getBorrowDate()), mktime(second->getBorrowDate())) < 0;
}

bool sortByBorrowingDateDsc(Instance * first, Instance * second)
{
    return difftime(mktime(first->getBorrowDate()), mktime(second->getBorrowDate())) > 0;
}

bool sortByBorrowerIDAsc(Borrower * first, Borrower * second)
{
    return first->getID() < second->getID();
}

bool sortByBorrowerIDDsc(Borrower * first, Borrower * second)
{
    return first->getID() > second->getID();
}

bool sortByBorrowerNameAsc(Borrower * first, Borrower * second)
{
    return strcmp(first->getName().c_str(), second->getName().c_str()) < 0;
}

bool sortByBorrowerNameDsc(Borrower * first, Borrower * second)
{
    return strcmp(first->getName().c_str(), second->getName().c_str()) > 0;
}

bool sortByBorrowerTypeAsc(Borrower * first, Borrower * second)
{
    return strcmp(borrower_types[first->getType() - 1].c_str(), borrower_types[second->getType() - 1].c_str()) < 0;
}

bool sortByBorrowerTypeDsc(Borrower * first, Borrower * second)
{
    return strcmp(borrower_types[first->getType() - 1].c_str(), borrower_types[second->getType() - 1].c_str()) > 0;
}

bool sortByDepartmentAsc(Borrower * first, Borrower * second)
{
    return strcmp(borrower_types[first->getDepartment() - 1].c_str(), borrower_types[second->getDepartment() - 1].c_str()) < 0;
}

bool sortByDepartmentDsc(Borrower * first, Borrower * second)
{
    return strcmp(borrower_types[first->getDepartment() - 1].c_str(), borrower_types[second->getDepartment() - 1].c_str()) > 0;
}

bool sortByItemsBorrowedAsc(Borrower * first, Borrower * second)
{
    return first->getNumItemsBorrowed() < second->getNumItemsBorrowed();
}

bool sortByItemsBorrowedDsc(Borrower * first, Borrower * second)
{
    return first->getNumItemsBorrowed() > second->getNumItemsBorrowed();
}

bool sortByItemsLateAsc(Borrower * first, Borrower * second)
{
    return first->getNumItemsLate() < second->getNumItemsLate();
}

bool sortByItemsLateDsc(Borrower * first, Borrower * second)
{
    return first->getNumItemsLate() > second->getNumItemsLate();
}
