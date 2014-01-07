#ifndef FunctionsCONTAINER_H
#define FunctionsCONTAINER_H

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/grid.h>
#include <sstream>
#include "Collection.h"
#include "Instance.h"
#include "Borrower.h"
#include "DialogConfirmApp.h"
#include "DialogDeleteErrorApp.h"

using namespace std;

void switchFrame(wxWindow * current_frame, wxWindow * next_frame);

bool showConfirmDialog(wxFrame * current_frame, string message = "exit");
void showErrorDialog(wxFrame * current_frame, string message = "borrower");

void tablePaging(bool previous, int * current_page);
void setPagingButtons(wxButton * previous_button, wxButton * next_button, int current_page, int int_max_page);
void tableCellLeftClick(int * selected_row, wxGrid * table, wxGridEvent & event, wxButton * edit_button, wxButton * delete_button);

void showError(bool valid, wxStaticText * error_label, string error_message);

bool checkDeleteBackspaceArrow(int keyCode);
void allowPositiveInteger(wxTextCtrl * text_field, wxKeyEvent & event);
void allowInteger(wxKeyEvent & event);
void allowAlphabetSpace(wxKeyEvent & event);

bool sortByCollectionIDAsc(Collection * first, Collection * second);
bool sortByCollectionIDDsc(Collection * first, Collection * second);

bool sortByTitleAsc(Collection * first, Collection * second);
bool sortByTitleDsc(Collection * first, Collection * second);

bool sortByAuthorAsc(Collection * first, Collection * second);
bool sortByAuthorDsc(Collection * first, Collection * second);

bool sortByPublisherAsc(Collection * first, Collection * second);
bool sortByPublisherDsc(Collection * first, Collection * second);

bool sortByYearAsc(Collection * first, Collection * second);
bool sortByYearDsc(Collection * first, Collection * second);

bool sortByDurationAsc(Collection * first, Collection * second);
bool sortByDurationDsc(Collection * first, Collection * second);

bool sortByBarcodeAsc(Instance * first, Instance * second);
bool sortByBarcodeDsc(Instance * first, Instance * second);

bool sortByCollectionAsc(Instance * first, Instance * second);
bool sortByCollectionDsc(Instance * first, Instance * second);

bool sortByStatusAsc(Instance * first, Instance * second);
bool sortByStatusDsc(Instance * first, Instance * second);

bool sortByBorrowTimesAsc(Instance * first, Instance * second);
bool sortByBorrowTimesDsc(Instance * first, Instance * second);

bool sortByCreationDateAsc(Instance * first, Instance * second);
bool sortByCreationDateDsc(Instance * first, Instance * second);

bool sortByBorrowerAsc(Instance * first, Instance * second);
bool sortByBorrowerDsc(Instance * first, Instance * second);

bool sortByBorrowingDateAsc(Instance * first, Instance * second);
bool sortByBorrowingDateDsc(Instance * first, Instance * second);

bool sortByBorrowerIDAsc(Borrower * first, Borrower * second);
bool sortByBorrowerIDDsc(Borrower * first, Borrower * second);

bool sortByBorrowerNameAsc(Borrower * first, Borrower * second);
bool sortByBorrowerNameDsc(Borrower * first, Borrower * second);

bool sortByBorrowerTypeAsc(Borrower * first, Borrower * second);
bool sortByBorrowerTypeDsc(Borrower * first, Borrower * second);

bool sortByDepartmentAsc(Borrower * first, Borrower * second);
bool sortByDepartmentDsc(Borrower * first, Borrower * second);

bool sortByItemsBorrowedAsc(Borrower * first, Borrower * second);
bool sortByItemsBorrowedDsc(Borrower * first, Borrower * second);

bool sortByItemsLateAsc(Borrower * first, Borrower * second);
bool sortByItemsLateDsc(Borrower * first, Borrower * second);

#endif // FunctionsCONTAINER_H
