///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2013)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

FrameMain::FrameMain( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_panel9 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( m_panel9, wxID_ANY, wxT("Data") ), wxVERTICAL );
	
	btn_collection = new wxButton( m_panel9, ID_BTN_COLLECTION, wxT("Collection Table"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( btn_collection, 0, wxALL, 5 );
	
	btn_borrower = new wxButton( m_panel9, ID_BTN_BORROWER, wxT("Borrower Table"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( btn_borrower, 0, wxALL, 5 );
	
	
	m_panel9->SetSizer( sbSizer3 );
	m_panel9->Layout();
	sbSizer3->Fit( m_panel9 );
	bSizer4->Add( m_panel9, 1, wxEXPAND | wxALL, 5 );
	
	m_panel10 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Operation") ), wxVERTICAL );
	
	btn_borrow_item = new wxButton( m_panel10, ID_BTN_BORROW_ITEM, wxT("Borrow Item"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( btn_borrow_item, 0, wxALL, 5 );
	
	btn_return_item = new wxButton( m_panel10, ID_BTN_BORROW_ITEM, wxT("Return Item"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( btn_return_item, 0, wxALL, 5 );
	
	btn_change_item_status = new wxButton( m_panel10, ID_BTN_CHANGE_ITEM_STATUS, wxT("Change Item Status"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( btn_change_item_status, 0, wxALL, 5 );
	
	btn_download = new wxButton( m_panel10, ID_BTN_DOWNLOAD, wxT("Download"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( btn_download, 0, wxALL, 5 );
	
	
	m_panel10->SetSizer( sbSizer2 );
	m_panel10->Layout();
	sbSizer2->Fit( m_panel10 );
	bSizer4->Add( m_panel10, 1, wxEXPAND | wxALL, 5 );
	
	m_panel91 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer31;
	sbSizer31 = new wxStaticBoxSizer( new wxStaticBox( m_panel91, wxID_ANY, wxT("Report") ), wxVERTICAL );
	
	btn_report_collection = new wxButton( m_panel91, ID_BTN_REPORT_COLLECTION, wxT("Collection Report"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer31->Add( btn_report_collection, 0, wxALL, 5 );
	
	btn_report_instance = new wxButton( m_panel91, ID_BTN_INSTANCE_REPORT, wxT("Instance Report"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer31->Add( btn_report_instance, 0, wxALL, 5 );
	
	btn_report_overdue = new wxButton( m_panel91, ID_BTN_OVERDUE_REPORT, wxT("Overdue Report"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer31->Add( btn_report_overdue, 0, wxALL, 5 );
	
	
	m_panel91->SetSizer( sbSizer31 );
	m_panel91->Layout();
	sbSizer31->Fit( m_panel91 );
	bSizer4->Add( m_panel91, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer4 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameMain::exit ) );
	btn_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnCollectionClicked ), NULL, this );
	btn_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnBorrowerClicked ), NULL, this );
	btn_borrow_item->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnBorrowItemClicked ), NULL, this );
	btn_return_item->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnReturnItemClicked ), NULL, this );
	btn_change_item_status->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnChangeItemStatusClicked ), NULL, this );
	btn_download->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnDownloadClicked ), NULL, this );
	btn_report_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnReportCollectionClicked ), NULL, this );
	btn_report_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnReportInstanceClicked ), NULL, this );
	btn_report_overdue->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnReportOverdueClicked ), NULL, this );
}

FrameMain::~FrameMain()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameMain::exit ) );
	btn_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnCollectionClicked ), NULL, this );
	btn_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnBorrowerClicked ), NULL, this );
	btn_borrow_item->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnBorrowItemClicked ), NULL, this );
	btn_return_item->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnReturnItemClicked ), NULL, this );
	btn_change_item_status->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnChangeItemStatusClicked ), NULL, this );
	btn_download->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnDownloadClicked ), NULL, this );
	btn_report_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnReportCollectionClicked ), NULL, this );
	btn_report_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnReportInstanceClicked ), NULL, this );
	btn_report_overdue->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameMain::btnReportOverdueClicked ), NULL, this );
	
}

FrameDownload::FrameDownload( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_toolBar13 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back = new wxButton( m_toolBar13, ID_BTN_BACK_DOWNLOAD, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar13->AddControl( btn_back );
	m_toolBar13->Realize(); 
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText86 = new wxStaticText( this, wxID_ANY, wxT("Available Reports"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText86->Wrap( -1 );
	m_staticText86->SetFont( wxFont( 14, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText86->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_staticText86->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer17->Add( m_staticText86, 0, wxALL, 5 );
	
	lst_report = new wxListBox( this, ID_LST_REPORT, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer17->Add( lst_report, 0, wxALL, 5 );
	
	btn_download = new wxButton( this, ID_BTN_DOWNLOAD_REPORT, wxT("Download"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_download->Enable( false );
	
	bSizer17->Add( btn_download, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer17 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameDownload::exit ) );
	btn_back->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameDownload::btnBackClicked ), NULL, this );
	lst_report->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( FrameDownload::reportChosen ), NULL, this );
	btn_download->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameDownload::btnDownloadClicked ), NULL, this );
}

FrameDownload::~FrameDownload()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameDownload::exit ) );
	btn_back->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameDownload::btnBackClicked ), NULL, this );
	lst_report->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( FrameDownload::reportChosen ), NULL, this );
	btn_download->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameDownload::btnDownloadClicked ), NULL, this );
	
}

DialogDownloadLocation::DialogDownloadLocation( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText87 = new wxStaticText( this, wxID_ANY, wxT("Select the location to download the report"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText87->Wrap( -1 );
	bSizer18->Add( m_staticText87, 0, wxALL, 5 );
	
	dpk_location = new wxDirPickerCtrl( this, ID_DPK_LOCATION, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxDefaultSize, wxDIRP_DEFAULT_STYLE );
	bSizer18->Add( dpk_location, 0, wxALL, 5 );
	
	m_panel25 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer12;
	gbSizer12 = new wxGridBagSizer( 0, 0 );
	gbSizer12->SetFlexibleDirection( wxBOTH );
	gbSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_ok = new wxButton( m_panel25, ID_BTN_OK_DOWNLOAD, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_ok->Enable( false );
	
	gbSizer12->Add( btn_ok, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_cancel = new wxButton( m_panel25, ID_BTN_CANCEL_DOWNLOAD, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer12->Add( btn_cancel, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel25->SetSizer( gbSizer12 );
	m_panel25->Layout();
	gbSizer12->Fit( m_panel25 );
	bSizer18->Add( m_panel25, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer18 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogDownloadLocation::exit ) );
	dpk_location->Connect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( DialogDownloadLocation::locationSelected ), NULL, this );
	btn_ok->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogDownloadLocation::btnOKClicked ), NULL, this );
	btn_cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogDownloadLocation::btnCancelClicked ), NULL, this );
}

DialogDownloadLocation::~DialogDownloadLocation()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogDownloadLocation::exit ) );
	dpk_location->Disconnect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( DialogDownloadLocation::locationSelected ), NULL, this );
	btn_ok->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogDownloadLocation::btnOKClicked ), NULL, this );
	btn_cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogDownloadLocation::btnCancelClicked ), NULL, this );
	
}

FrameReportCollection::FrameReportCollection( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_panel20 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer8;
	gSizer8 = new wxGridSizer( 0, 2, 0, 0 );
	
	m_staticText76 = new wxStaticText( m_panel20, wxID_ANY, wxT("Collection Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	gSizer8->Add( m_staticText76, 0, wxALL, 5 );
	
	wxString choice_collection_typeChoices[] = { wxT("All") };
	int choice_collection_typeNChoices = sizeof( choice_collection_typeChoices ) / sizeof( wxString );
	choice_collection_type = new wxChoice( m_panel20, ID_CHOICE_REPORT_COLLECTION_TYPE, wxDefaultPosition, wxDefaultSize, choice_collection_typeNChoices, choice_collection_typeChoices, 0 );
	choice_collection_type->SetSelection( 0 );
	gSizer8->Add( choice_collection_type, 0, wxALL, 5 );
	
	m_staticText77 = new wxStaticText( m_panel20, wxID_ANY, wxT("Data Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText77->Wrap( -1 );
	gSizer8->Add( m_staticText77, 0, wxALL, 5 );
	
	wxString choice_data_typeChoices[] = { wxT("All") };
	int choice_data_typeNChoices = sizeof( choice_data_typeChoices ) / sizeof( wxString );
	choice_data_type = new wxChoice( m_panel20, ID_CHOICE_REPORT_DATA_TYPE, wxDefaultPosition, wxDefaultSize, choice_data_typeNChoices, choice_data_typeChoices, 0 );
	choice_data_type->SetSelection( 0 );
	gSizer8->Add( choice_data_type, 0, wxALL, 5 );
	
	m_staticText78 = new wxStaticText( m_panel20, wxID_ANY, wxT("Category"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText78->Wrap( -1 );
	gSizer8->Add( m_staticText78, 0, wxALL, 5 );
	
	wxString choice_categoryChoices[] = { wxT("All") };
	int choice_categoryNChoices = sizeof( choice_categoryChoices ) / sizeof( wxString );
	choice_category = new wxChoice( m_panel20, ID_CHOICE_REPORT_CATEGORY, wxDefaultPosition, wxDefaultSize, choice_categoryNChoices, choice_categoryChoices, 0 );
	choice_category->SetSelection( 0 );
	gSizer8->Add( choice_category, 0, wxALL, 5 );
	
	
	m_panel20->SetSizer( gSizer8 );
	m_panel20->Layout();
	gSizer8->Fit( m_panel20 );
	bSizer12->Add( m_panel20, 1, wxEXPAND | wxALL, 5 );
	
	btn_get_report = new wxButton( this, ID_BTN_GET_REPORT, wxT("Get Report"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( btn_get_report, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	m_toolBar20 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back = new wxButton( m_toolBar20, ID_BTN_BACK_REPORT_COLLECTION, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar20->AddControl( btn_back );
	m_toolBar20->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameReportCollection::exit ) );
	btn_get_report->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportCollection::btnGetReportClicked ), NULL, this );
	btn_back->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportCollection::btnBackClicked ), NULL, this );
}

FrameReportCollection::~FrameReportCollection()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameReportCollection::exit ) );
	btn_get_report->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportCollection::btnGetReportClicked ), NULL, this );
	btn_back->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportCollection::btnBackClicked ), NULL, this );
	
}

FrameBorrowItem::FrameBorrowItem( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_panel14 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer5;
	gSizer5 = new wxGridSizer( 0, 3, 0, 0 );
	
	m_staticText41 = new wxStaticText( m_panel14, wxID_ANY, wxT("Borrower ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	gSizer5->Add( m_staticText41, 0, wxALL, 5 );
	
	txt_borrower_id = new wxTextCtrl( m_panel14, ID_TXT_BORROWER_ID, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer5->Add( txt_borrower_id, 0, wxALL, 5 );
	
	lbl_error_borrower_id = new wxStaticText( m_panel14, ID_LBL_BORROWER_ID, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_borrower_id->Wrap( -1 );
	lbl_error_borrower_id->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_borrower_id, 0, wxALL, 5 );
	
	lbl_borrower_name = new wxStaticText( m_panel14, ID_LBL_BORROWER_NAME, wxT("Borrower Name"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_borrower_name->Wrap( -1 );
	gSizer5->Add( lbl_borrower_name, 0, wxALL, 5 );
	
	txt_borrower_name = new wxStaticText( m_panel14, ID_TXT_BORROWER_NAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	txt_borrower_name->Wrap( -1 );
	gSizer5->Add( txt_borrower_name, 0, wxALL, 5 );
	
	m_staticText49 = new wxStaticText( m_panel14, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	gSizer5->Add( m_staticText49, 0, wxALL, 5 );
	
	lbl_item_barcode = new wxStaticText( m_panel14, ID_LBL_ITEM_BARCODE, wxT("Item Barcode"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_item_barcode->Wrap( -1 );
	gSizer5->Add( lbl_item_barcode, 0, wxALL, 5 );
	
	txt_item_barcode = new wxTextCtrl( m_panel14, ID_TXT_ITEM_BARCODE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer5->Add( txt_item_barcode, 0, wxALL, 5 );
	
	lbl_error_item_barcode = new wxStaticText( m_panel14, ID_LBL_ERROR_ITEM_BARCODE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_item_barcode->Wrap( -1 );
	lbl_error_item_barcode->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_item_barcode, 0, wxALL, 5 );
	
	lbl_collection_name = new wxStaticText( m_panel14, ID_LBL_COLLECTION_NAME, wxT("Collection Name"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_collection_name->Wrap( -1 );
	gSizer5->Add( lbl_collection_name, 0, wxALL, 5 );
	
	txt_collection_name = new wxStaticText( m_panel14, ID_LBL_COLLECTION_NAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	txt_collection_name->Wrap( -1 );
	gSizer5->Add( txt_collection_name, 0, wxALL, 5 );
	
	m_staticText55 = new wxStaticText( m_panel14, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	gSizer5->Add( m_staticText55, 0, wxALL, 5 );
	
	lbl_borrow_days = new wxStaticText( m_panel14, ID_LBL_BORROW_DAYS, wxT("Days"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_borrow_days->Wrap( -1 );
	gSizer5->Add( lbl_borrow_days, 0, wxALL, 5 );
	
	txt_borrow_days = new wxTextCtrl( m_panel14, ID_TXT_BORROW_DAYS, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer5->Add( txt_borrow_days, 0, wxALL, 5 );
	
	lbl_error_borrow_days = new wxStaticText( m_panel14, ID_LBL_ERROR_BORROW_DAYS, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_borrow_days->Wrap( -1 );
	lbl_error_borrow_days->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_borrow_days, 0, wxALL, 5 );
	
	
	m_panel14->SetSizer( gSizer5 );
	m_panel14->Layout();
	gSizer5->Fit( m_panel14 );
	bSizer10->Add( m_panel14, 1, wxEXPAND | wxALL, 5 );
	
	btn_confirm_borrow = new wxButton( this, ID_BTN_CONFIRM_BORROW, wxT("Confirm"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( btn_confirm_borrow, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	m_toolBar7 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_cancel_borrow = new wxButton( m_toolBar7, ID_BTN_CANCEL_BORROW, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar7->AddControl( btn_cancel_borrow );
	m_toolBar7->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameBorrowItem::exit ) );
	txt_borrower_id->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameBorrowItem::inputBorrowerID ), NULL, this );
	txt_item_barcode->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameBorrowItem::inputItemBarcodeBorrow ), NULL, this );
	txt_borrow_days->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameBorrowItem::inputBorrowDays ), NULL, this );
	btn_confirm_borrow->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrowItem::btnConfirmBorrowClicked ), NULL, this );
	btn_cancel_borrow->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrowItem::btnCancelBorrowClicked ), NULL, this );
}

FrameBorrowItem::~FrameBorrowItem()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameBorrowItem::exit ) );
	txt_borrower_id->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameBorrowItem::inputBorrowerID ), NULL, this );
	txt_item_barcode->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameBorrowItem::inputItemBarcodeBorrow ), NULL, this );
	txt_borrow_days->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameBorrowItem::inputBorrowDays ), NULL, this );
	btn_confirm_borrow->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrowItem::btnConfirmBorrowClicked ), NULL, this );
	btn_cancel_borrow->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrowItem::btnCancelBorrowClicked ), NULL, this );
	
}

FrameReturnItem::FrameReturnItem( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	pnl_return_item_form = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer6;
	gSizer6 = new wxGridSizer( 0, 3, 0, 0 );
	
	lbl_item_barcode_return = new wxStaticText( pnl_return_item_form, ID_LBL_ITEM_BARCODE_RETURN, wxT("Item Barcode"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_item_barcode_return->Wrap( -1 );
	gSizer6->Add( lbl_item_barcode_return, 0, wxALL, 5 );
	
	txt_item_barcode_return = new wxTextCtrl( pnl_return_item_form, ID_TXT_ITEM_BARCODE_RETURN, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer6->Add( txt_item_barcode_return, 0, wxALL, 5 );
	
	lbl_error_item_barcode_return = new wxStaticText( pnl_return_item_form, ID_LBL_ERROR_ITEM_BARCODE_RETURN, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_item_barcode_return->Wrap( -1 );
	lbl_error_item_barcode_return->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer6->Add( lbl_error_item_barcode_return, 0, wxALL, 5 );
	
	lbl_days_late = new wxStaticText( pnl_return_item_form, ID_LBL_DAYS_LATE, wxT("Days Late"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_days_late->Wrap( -1 );
	gSizer6->Add( lbl_days_late, 0, wxALL, 5 );
	
	txt_days_late = new wxStaticText( pnl_return_item_form, ID_TXT_DAYS_LATE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	txt_days_late->Wrap( -1 );
	gSizer6->Add( txt_days_late, 0, wxALL, 5 );
	
	
	pnl_return_item_form->SetSizer( gSizer6 );
	pnl_return_item_form->Layout();
	gSizer6->Fit( pnl_return_item_form );
	bSizer11->Add( pnl_return_item_form, 1, wxEXPAND | wxALL, 5 );
	
	btn_confirm_return_item = new wxButton( this, ID_BTN_CONFIRM_RETURN_ITEM, wxT("Confirm"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( btn_confirm_return_item, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	m_toolBar8 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_cancel_return_item = new wxButton( m_toolBar8, ID_BTN_CANCEL_RETURN_ITEM, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar8->AddControl( btn_cancel_return_item );
	m_toolBar8->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameReturnItem::exit ) );
	txt_item_barcode_return->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameReturnItem::inputItemBarcodeReturn ), NULL, this );
	btn_confirm_return_item->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReturnItem::btnConfirmReturnItemClicked ), NULL, this );
	btn_cancel_return_item->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReturnItem::btnCancelReturnItemClicked ), NULL, this );
}

FrameReturnItem::~FrameReturnItem()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameReturnItem::exit ) );
	txt_item_barcode_return->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameReturnItem::inputItemBarcodeReturn ), NULL, this );
	btn_confirm_return_item->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReturnItem::btnConfirmReturnItemClicked ), NULL, this );
	btn_cancel_return_item->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReturnItem::btnCancelReturnItemClicked ), NULL, this );
	
}

FrameCollection::FrameCollection( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	tbl_collection = new wxGrid( this, ID_TBL_COLLECTION, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	tbl_collection->CreateGrid( 10, 11 );
	tbl_collection->EnableEditing( false );
	tbl_collection->EnableGridLines( true );
	tbl_collection->EnableDragGridSize( false );
	tbl_collection->SetMargins( 0, 0 );
	
	// Columns
	tbl_collection->SetColSize( 0, 80 );
	tbl_collection->SetColSize( 1, 201 );
	tbl_collection->SetColSize( 2, 196 );
	tbl_collection->SetColSize( 3, 114 );
	tbl_collection->SetColSize( 4, 101 );
	tbl_collection->SetColSize( 5, 80 );
	tbl_collection->SetColSize( 6, 87 );
	tbl_collection->SetColSize( 7, 80 );
	tbl_collection->SetColSize( 8, 56 );
	tbl_collection->SetColSize( 9, 69 );
	tbl_collection->SetColSize( 10, 151 );
	tbl_collection->EnableDragColMove( false );
	tbl_collection->EnableDragColSize( true );
	tbl_collection->SetColLabelSize( 30 );
	tbl_collection->SetColLabelValue( 0, wxT("ID") );
	tbl_collection->SetColLabelValue( 1, wxT("Title") );
	tbl_collection->SetColLabelValue( 2, wxT("Author") );
	tbl_collection->SetColLabelValue( 3, wxT("Category") );
	tbl_collection->SetColLabelValue( 4, wxT("Collection Type") );
	tbl_collection->SetColLabelValue( 5, wxT("Data Type") );
	tbl_collection->SetColLabelValue( 6, wxT("Version") );
	tbl_collection->SetColLabelValue( 7, wxT("Publisher") );
	tbl_collection->SetColLabelValue( 8, wxT("Year") );
	tbl_collection->SetColLabelValue( 9, wxT("Duration") );
	tbl_collection->SetColLabelValue( 10, wxT("Number of Instances") );
	tbl_collection->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	tbl_collection->EnableDragRowSize( false );
	tbl_collection->SetRowLabelSize( 80 );
	tbl_collection->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	tbl_collection->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer2->Add( tbl_collection, 0, wxALL, 5 );
	
	m_panel21 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer12;
	gbSizer12 = new wxGridBagSizer( 0, 0 );
	gbSizer12->SetFlexibleDirection( wxBOTH );
	gbSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText79 = new wxStaticText( m_panel21, wxID_ANY, wxT("Sort By"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText79->Wrap( -1 );
	gbSizer12->Add( m_staticText79, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	wxString choice_sort_collectionChoices[] = { wxT("ID"), wxT("Title"), wxT("Author"), wxT("Publisher"), wxT("Year"), wxT("Duration"), wxT("Number of Instances") };
	int choice_sort_collectionNChoices = sizeof( choice_sort_collectionChoices ) / sizeof( wxString );
	choice_sort_collection = new wxChoice( m_panel21, ID_CHOICE_SORT_COLLECTION, wxDefaultPosition, wxDefaultSize, choice_sort_collectionNChoices, choice_sort_collectionChoices, 0 );
	choice_sort_collection->SetSelection( 0 );
	gbSizer12->Add( choice_sort_collection, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	wxString rdb_orderChoices[] = { wxT("Ascending"), wxT("Desending") };
	int rdb_orderNChoices = sizeof( rdb_orderChoices ) / sizeof( wxString );
	rdb_order = new wxRadioBox( m_panel21, ID_RDB_ORDER_COLLECTION, wxT("Order"), wxDefaultPosition, wxDefaultSize, rdb_orderNChoices, rdb_orderChoices, 1, wxRA_SPECIFY_COLS );
	rdb_order->SetSelection( 0 );
	gbSizer12->Add( rdb_order, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel21->SetSizer( gbSizer12 );
	m_panel21->Layout();
	gbSizer12->Fit( m_panel21 );
	bSizer2->Add( m_panel21, 1, wxEXPAND | wxALL, 5 );
	
	m_panel4 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 0, 0 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_previous_collection = new wxButton( m_panel4, ID_BTN_PREVIOUS_COLLECTION, wxT("Previous"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_previous_collection->Enable( false );
	
	gbSizer1->Add( btn_previous_collection, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_next_collection = new wxButton( m_panel4, ID_BTN_NEXT_COLLECTION, wxT("Next"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( btn_next_collection, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel4->SetSizer( gbSizer1 );
	m_panel4->Layout();
	gbSizer1->Fit( m_panel4 );
	bSizer2->Add( m_panel4, 1, wxEXPAND | wxALL, 5 );
	
	pnl_collection = new wxPanel( this, ID_PNL_COLLECTION, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer4;
	gbSizer4 = new wxGridBagSizer( 0, 0 );
	gbSizer4->SetFlexibleDirection( wxBOTH );
	gbSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_add_collection = new wxButton( pnl_collection, ID_BTN_ADD_COLLECTION, wxT("Add Collection"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer4->Add( btn_add_collection, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_view_instances = new wxButton( pnl_collection, ID_BTN_VIEW_INSTANCES, wxT("View Instances"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_view_instances->Enable( false );
	
	gbSizer4->Add( btn_view_instances, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_edit_collection = new wxButton( pnl_collection, ID_BTN_EDIT_COLLECTIOTN, wxT("Edit Collection"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_edit_collection->Enable( false );
	
	gbSizer4->Add( btn_edit_collection, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_delete_collection = new wxButton( pnl_collection, ID_BTN_DELETE_COLLECTION, wxT("Delete Collection"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_delete_collection->Enable( false );
	
	gbSizer4->Add( btn_delete_collection, wxGBPosition( 0, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_save = new wxButton( pnl_collection, ID_BTN_SAVE_COLLECTION, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer4->Add( btn_save, wxGBPosition( 0, 4 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_print = new wxButton( pnl_collection, ID_BTN_PRINT_COLLECTION, wxT("Print"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer4->Add( btn_print, wxGBPosition( 0, 6 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	pnl_collection->SetSizer( gbSizer4 );
	pnl_collection->Layout();
	gbSizer4->Fit( pnl_collection );
	bSizer2->Add( pnl_collection, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	m_toolBar2 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back_collection = new wxButton( m_toolBar2, ID_BTN_BACK, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar2->AddControl( btn_back_collection );
	m_toolBar2->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameCollection::exit ) );
	tbl_collection->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FrameCollection::cellLeftClick ), NULL, this );
	choice_sort_collection->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FrameCollection::sortOptionChanged ), NULL, this );
	rdb_order->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( FrameCollection::sortOptionChanged ), NULL, this );
	btn_previous_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnPreviousCollectionClicked ), NULL, this );
	btn_next_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnNextCollectionClicked ), NULL, this );
	btn_add_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnAddCollectionClicked ), NULL, this );
	btn_view_instances->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnViewInstancesClicked ), NULL, this );
	btn_edit_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnEditCollectionClicked ), NULL, this );
	btn_delete_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnDeleteCollectionClicked ), NULL, this );
	btn_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnSaveClicked ), NULL, this );
	btn_print->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnPrintClicked ), NULL, this );
	btn_back_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnBackCollectionClicked ), NULL, this );
}

FrameCollection::~FrameCollection()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameCollection::exit ) );
	tbl_collection->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FrameCollection::cellLeftClick ), NULL, this );
	choice_sort_collection->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FrameCollection::sortOptionChanged ), NULL, this );
	rdb_order->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( FrameCollection::sortOptionChanged ), NULL, this );
	btn_previous_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnPreviousCollectionClicked ), NULL, this );
	btn_next_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnNextCollectionClicked ), NULL, this );
	btn_add_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnAddCollectionClicked ), NULL, this );
	btn_view_instances->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnViewInstancesClicked ), NULL, this );
	btn_edit_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnEditCollectionClicked ), NULL, this );
	btn_delete_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnDeleteCollectionClicked ), NULL, this );
	btn_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnSaveClicked ), NULL, this );
	btn_print->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnPrintClicked ), NULL, this );
	btn_back_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCollection::btnBackCollectionClicked ), NULL, this );
	
}

FrameInstance::FrameInstance( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	lbl_collection_name = new wxStaticText( this, ID_LBL_COLLECTION_NAME, wxT("Collection Name"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_collection_name->Wrap( -1 );
	lbl_collection_name->SetFont( wxFont( 15, 70, 90, 90, false, wxEmptyString ) );
	lbl_collection_name->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	lbl_collection_name->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer3->Add( lbl_collection_name, 0, wxALL, 5 );
	
	tbl_instance = new wxGrid( this, ID_TBL_INSTANCE, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	tbl_instance->CreateGrid( 10, 8 );
	tbl_instance->EnableEditing( false );
	tbl_instance->EnableGridLines( true );
	tbl_instance->EnableDragGridSize( false );
	tbl_instance->SetMargins( 0, 0 );
	
	// Columns
	tbl_instance->SetColSize( 0, 129 );
	tbl_instance->SetColSize( 1, 110 );
	tbl_instance->SetColSize( 2, 113 );
	tbl_instance->SetColSize( 3, 114 );
	tbl_instance->SetColSize( 4, 90 );
	tbl_instance->SetColSize( 5, 101 );
	tbl_instance->SetColSize( 6, 127 );
	tbl_instance->SetColSize( 7, 127 );
	tbl_instance->EnableDragColMove( false );
	tbl_instance->EnableDragColSize( true );
	tbl_instance->SetColLabelSize( 30 );
	tbl_instance->SetColLabelValue( 0, wxT("Barcode") );
	tbl_instance->SetColLabelValue( 1, wxT("Collection ID") );
	tbl_instance->SetColLabelValue( 2, wxT("Status") );
	tbl_instance->SetColLabelValue( 3, wxT("Borrow Times") );
	tbl_instance->SetColLabelValue( 4, wxT("Borrow Days") );
	tbl_instance->SetColLabelValue( 5, wxT("Creation Date") );
	tbl_instance->SetColLabelValue( 6, wxT("Borrower ID") );
	tbl_instance->SetColLabelValue( 7, wxT("Borrowing Date") );
	tbl_instance->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	tbl_instance->EnableDragRowSize( false );
	tbl_instance->SetRowLabelSize( 80 );
	tbl_instance->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	tbl_instance->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer3->Add( tbl_instance, 0, wxALL, 5 );
	
	m_panel21 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer12;
	gbSizer12 = new wxGridBagSizer( 0, 0 );
	gbSizer12->SetFlexibleDirection( wxBOTH );
	gbSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText79 = new wxStaticText( m_panel21, wxID_ANY, wxT("Sort By"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText79->Wrap( -1 );
	gbSizer12->Add( m_staticText79, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	wxString choice_sort_instanceChoices[] = { wxT("Barcode"), wxT("Collection ID"), wxT("Status"), wxT("Borrow Times"), wxT("Creation Date"), wxT("Borrower ID"), wxT("Borrowing Date") };
	int choice_sort_instanceNChoices = sizeof( choice_sort_instanceChoices ) / sizeof( wxString );
	choice_sort_instance = new wxChoice( m_panel21, ID_CHOICE_SORT_INSTANCE, wxDefaultPosition, wxDefaultSize, choice_sort_instanceNChoices, choice_sort_instanceChoices, 0 );
	choice_sort_instance->SetSelection( 0 );
	gbSizer12->Add( choice_sort_instance, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	wxString rdb_orderChoices[] = { wxT("Ascending"), wxT("Desending") };
	int rdb_orderNChoices = sizeof( rdb_orderChoices ) / sizeof( wxString );
	rdb_order = new wxRadioBox( m_panel21, ID_RDB_ORDER_INSTANCE, wxT("Order"), wxDefaultPosition, wxDefaultSize, rdb_orderNChoices, rdb_orderChoices, 1, wxRA_SPECIFY_COLS );
	rdb_order->SetSelection( 0 );
	gbSizer12->Add( rdb_order, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel21->SetSizer( gbSizer12 );
	m_panel21->Layout();
	gbSizer12->Fit( m_panel21 );
	bSizer3->Add( m_panel21, 1, wxEXPAND | wxALL, 5 );
	
	m_panel5 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer2;
	gbSizer2 = new wxGridBagSizer( 0, 0 );
	gbSizer2->SetFlexibleDirection( wxBOTH );
	gbSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_previous_instance = new wxButton( m_panel5, ID_BTN_PREVIOUS_INSTANCE, wxT("Previous"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_previous_instance->Enable( false );
	
	gbSizer2->Add( btn_previous_instance, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_next_instance = new wxButton( m_panel5, ID_BTN_NEXT_INSTANCE, wxT("Next"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( btn_next_instance, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel5->SetSizer( gbSizer2 );
	m_panel5->Layout();
	gbSizer2->Fit( m_panel5 );
	bSizer3->Add( m_panel5, 1, wxEXPAND | wxALL, 5 );
	
	m_panel18 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer8;
	gbSizer8 = new wxGridBagSizer( 0, 0 );
	gbSizer8->SetFlexibleDirection( wxBOTH );
	gbSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_add_instance = new wxButton( m_panel18, wxID_ANY, wxT("Add Instance"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer8->Add( btn_add_instance, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_edit_instance = new wxButton( m_panel18, ID_BTN_EDIT_INSTANCE, wxT("Edit Instance"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_edit_instance->Enable( false );
	
	gbSizer8->Add( btn_edit_instance, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_delete_instance = new wxButton( m_panel18, ID_BTN_DELETE_INSTANCE, wxT("Delete Instance"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_delete_instance->Enable( false );
	
	gbSizer8->Add( btn_delete_instance, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_save = new wxButton( m_panel18, ID_BTN_SAVE_INSTANCE, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer8->Add( btn_save, wxGBPosition( 0, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_print = new wxButton( m_panel18, ID_BTN_PRINT_INSTANCE, wxT("Print"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer8->Add( btn_print, wxGBPosition( 0, 4 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel18->SetSizer( gbSizer8 );
	m_panel18->Layout();
	gbSizer8->Fit( m_panel18 );
	bSizer3->Add( m_panel18, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	m_toolBar3 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back_instance = new wxButton( m_toolBar3, ID_BTN_BACK_INSTANCE, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar3->AddControl( btn_back_instance );
	btn_home_instance = new wxButton( m_toolBar3, ID_BTN_HOME_INSTANCE, wxT("Home"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar3->AddControl( btn_home_instance );
	m_toolBar3->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameInstance::exit ) );
	tbl_instance->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FrameInstance::cellLeftClick ), NULL, this );
	choice_sort_instance->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FrameInstance::sortOptionChanged ), NULL, this );
	rdb_order->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( FrameInstance::sortOptionChanged ), NULL, this );
	btn_previous_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnPreviousInstanceClicked ), NULL, this );
	btn_next_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnNextInstanceClicked ), NULL, this );
	btn_add_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnAddInstanceClicked ), NULL, this );
	btn_edit_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnEditInstanceClicked ), NULL, this );
	btn_delete_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnDeleteInstanceClicked ), NULL, this );
	btn_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnSaveClicked ), NULL, this );
	btn_print->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnPrintClicked ), NULL, this );
	btn_back_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnBackInstanceClicked ), NULL, this );
	btn_home_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnHomeInstanceCicked ), NULL, this );
}

FrameInstance::~FrameInstance()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameInstance::exit ) );
	tbl_instance->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FrameInstance::cellLeftClick ), NULL, this );
	choice_sort_instance->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FrameInstance::sortOptionChanged ), NULL, this );
	rdb_order->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( FrameInstance::sortOptionChanged ), NULL, this );
	btn_previous_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnPreviousInstanceClicked ), NULL, this );
	btn_next_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnNextInstanceClicked ), NULL, this );
	btn_add_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnAddInstanceClicked ), NULL, this );
	btn_edit_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnEditInstanceClicked ), NULL, this );
	btn_delete_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnDeleteInstanceClicked ), NULL, this );
	btn_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnSaveClicked ), NULL, this );
	btn_print->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnPrintClicked ), NULL, this );
	btn_back_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnBackInstanceClicked ), NULL, this );
	btn_home_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameInstance::btnHomeInstanceCicked ), NULL, this );
	
}

FrameBorrower::FrameBorrower( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	tbl_borrower = new wxGrid( this, ID_TBL_BORROWER, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	tbl_borrower->CreateGrid( 10, 8 );
	tbl_borrower->EnableEditing( false );
	tbl_borrower->EnableGridLines( true );
	tbl_borrower->EnableDragGridSize( false );
	tbl_borrower->SetMargins( 0, 0 );
	
	// Columns
	tbl_borrower->SetColSize( 0, 80 );
	tbl_borrower->SetColSize( 1, 234 );
	tbl_borrower->SetColSize( 2, 162 );
	tbl_borrower->SetColSize( 3, 148 );
	tbl_borrower->SetColSize( 4, 143 );
	tbl_borrower->SetColSize( 5, 124 );
	tbl_borrower->SetColSize( 6, 122 );
	tbl_borrower->SetColSize( 7, 108 );
	tbl_borrower->EnableDragColMove( false );
	tbl_borrower->EnableDragColSize( true );
	tbl_borrower->SetColLabelSize( 30 );
	tbl_borrower->SetColLabelValue( 0, wxT("ID") );
	tbl_borrower->SetColLabelValue( 1, wxT("Name") );
	tbl_borrower->SetColLabelValue( 2, wxT("Type") );
	tbl_borrower->SetColLabelValue( 3, wxT("Department") );
	tbl_borrower->SetColLabelValue( 4, wxT("Mobile Number") );
	tbl_borrower->SetColLabelValue( 5, wxT("Items Borrowing") );
	tbl_borrower->SetColLabelValue( 6, wxT("Items Borrowed") );
	tbl_borrower->SetColLabelValue( 7, wxT("Items Late") );
	tbl_borrower->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	tbl_borrower->EnableDragRowSize( false );
	tbl_borrower->SetRowLabelSize( 80 );
	tbl_borrower->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	tbl_borrower->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer4->Add( tbl_borrower, 0, wxALL, 5 );
	
	m_panel21 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer12;
	gbSizer12 = new wxGridBagSizer( 0, 0 );
	gbSizer12->SetFlexibleDirection( wxBOTH );
	gbSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText79 = new wxStaticText( m_panel21, wxID_ANY, wxT("Sort By"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText79->Wrap( -1 );
	gbSizer12->Add( m_staticText79, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	wxString choice_sort_instanceChoices[] = { wxT("ID"), wxT("Name"), wxT("Type"), wxT("Department"), wxT("Items Borrowing"), wxT("Items Borrowed"), wxT("Items Late") };
	int choice_sort_instanceNChoices = sizeof( choice_sort_instanceChoices ) / sizeof( wxString );
	choice_sort_instance = new wxChoice( m_panel21, ID_CHOICE_SORT_BORROWER, wxDefaultPosition, wxDefaultSize, choice_sort_instanceNChoices, choice_sort_instanceChoices, 0 );
	choice_sort_instance->SetSelection( 0 );
	gbSizer12->Add( choice_sort_instance, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	wxString rdb_orderChoices[] = { wxT("Ascending"), wxT("Desending") };
	int rdb_orderNChoices = sizeof( rdb_orderChoices ) / sizeof( wxString );
	rdb_order = new wxRadioBox( m_panel21, ID_RDB_ORDER_INSTANCE, wxT("Order"), wxDefaultPosition, wxDefaultSize, rdb_orderNChoices, rdb_orderChoices, 1, wxRA_SPECIFY_COLS );
	rdb_order->SetSelection( 0 );
	gbSizer12->Add( rdb_order, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel21->SetSizer( gbSizer12 );
	m_panel21->Layout();
	gbSizer12->Fit( m_panel21 );
	bSizer4->Add( m_panel21, 1, wxEXPAND | wxALL, 5 );
	
	m_panel6 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer3;
	gbSizer3 = new wxGridBagSizer( 0, 0 );
	gbSizer3->SetFlexibleDirection( wxBOTH );
	gbSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_previous_borrower = new wxButton( m_panel6, ID_PREVIOUS_BORROWER, wxT("Previous"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_previous_borrower->Enable( false );
	
	gbSizer3->Add( btn_previous_borrower, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_next_borrower = new wxButton( m_panel6, ID_NEXT_BORROWER, wxT("Next"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( btn_next_borrower, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel6->SetSizer( gbSizer3 );
	m_panel6->Layout();
	gbSizer3->Fit( m_panel6 );
	bSizer4->Add( m_panel6, 1, wxEXPAND | wxALL, 5 );
	
	m_panel19 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer9;
	gbSizer9 = new wxGridBagSizer( 0, 0 );
	gbSizer9->SetFlexibleDirection( wxBOTH );
	gbSizer9->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_add_borrower = new wxButton( m_panel19, ID_BTN_ADD_BORROWER, wxT("Add Borrower"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer9->Add( btn_add_borrower, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_edit_borrower = new wxButton( m_panel19, ID_BTN_EDIT_BORROWER, wxT("Edit Borrower"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_edit_borrower->Enable( false );
	
	gbSizer9->Add( btn_edit_borrower, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_delete_borrower = new wxButton( m_panel19, ID_BTN_DELETE_BORROWER, wxT("Delete Borrower"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_delete_borrower->Enable( false );
	
	gbSizer9->Add( btn_delete_borrower, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_save = new wxButton( m_panel19, ID_BTN_SAVE_BORROWER, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer9->Add( btn_save, wxGBPosition( 0, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_print = new wxButton( m_panel19, ID_BTN_PRINT_BORROWER, wxT("Print"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer9->Add( btn_print, wxGBPosition( 0, 4 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel19->SetSizer( gbSizer9 );
	m_panel19->Layout();
	gbSizer9->Fit( m_panel19 );
	bSizer4->Add( m_panel19, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer4 );
	this->Layout();
	m_toolBar5 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back_borrower = new wxButton( m_toolBar5, ID_BTN_BACK_BORROWER, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar5->AddControl( btn_back_borrower );
	m_toolBar5->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameBorrower::exit ) );
	tbl_borrower->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FrameBorrower::cellLeftClick ), NULL, this );
	choice_sort_instance->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FrameBorrower::sortOptionChanged ), NULL, this );
	rdb_order->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( FrameBorrower::sortOptionChanged ), NULL, this );
	btn_previous_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnPreviousBorrowerClicked ), NULL, this );
	btn_next_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnNextBorrowerClicked ), NULL, this );
	btn_add_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnAddBorrowerClicked ), NULL, this );
	btn_edit_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnEditBorrowerClicked ), NULL, this );
	btn_delete_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnDeleteBorrowerClicked ), NULL, this );
	btn_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnSaveClicked ), NULL, this );
	btn_print->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnPrintClicked ), NULL, this );
	btn_back_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnBackBorrowerClicked ), NULL, this );
}

FrameBorrower::~FrameBorrower()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameBorrower::exit ) );
	tbl_borrower->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( FrameBorrower::cellLeftClick ), NULL, this );
	choice_sort_instance->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FrameBorrower::sortOptionChanged ), NULL, this );
	rdb_order->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( FrameBorrower::sortOptionChanged ), NULL, this );
	btn_previous_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnPreviousBorrowerClicked ), NULL, this );
	btn_next_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnNextBorrowerClicked ), NULL, this );
	btn_add_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnAddBorrowerClicked ), NULL, this );
	btn_edit_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnEditBorrowerClicked ), NULL, this );
	btn_delete_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnDeleteBorrowerClicked ), NULL, this );
	btn_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnSaveClicked ), NULL, this );
	btn_print->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnPrintClicked ), NULL, this );
	btn_back_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameBorrower::btnBackBorrowerClicked ), NULL, this );
	
}

FrameReportInstance::FrameReportInstance( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_toolBar11 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back = new wxButton( m_toolBar11, ID_BTN_BACK_REPORT_INSTANCE, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar11->AddControl( btn_back );
	m_toolBar11->Realize(); 
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	m_panel21 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer9;
	gSizer9 = new wxGridSizer( 0, 3, 0, 0 );
	
	m_staticText89 = new wxStaticText( m_panel21, wxID_ANY, wxT("Collection ID (Leave blank to find all)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText89->Wrap( -1 );
	gSizer9->Add( m_staticText89, 0, wxALL, 5 );
	
	txt_collection_id = new wxTextCtrl( m_panel21, ID_TXT_REPORT_INSTANCE_ID, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer9->Add( txt_collection_id, 0, wxALL, 5 );
	
	lbl_error_collection_id = new wxStaticText( m_panel21, ID_LBL_ERROR_REPORT_INSTANCE_COLLECTION, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_collection_id->Wrap( -1 );
	lbl_error_collection_id->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer9->Add( lbl_error_collection_id, 0, wxALL, 5 );
	
	cb_borrowed = new wxCheckBox( m_panel21, ID_CB_BORROWED, wxT("Currently Borrowed"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer9->Add( cb_borrowed, 0, wxALL, 5 );
	
	cb_overdue = new wxCheckBox( m_panel21, ID_CB_OVERDUE, wxT("Overdue"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer9->Add( cb_overdue, 0, wxALL, 5 );
	
	
	m_panel21->SetSizer( gSizer9 );
	m_panel21->Layout();
	gSizer9->Fit( m_panel21 );
	bSizer14->Add( m_panel21, 1, wxEXPAND | wxALL, 5 );
	
	btn_report = new wxButton( this, ID_BTB_GET_REPORT_INSTANCE, wxT("Get Report"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( btn_report, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameReportInstance::exit ) );
	btn_back->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportInstance::btnBackClicked ), NULL, this );
	cb_overdue->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( FrameReportInstance::overdueChanged ), NULL, this );
	btn_report->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportInstance::btnReportClicked ), NULL, this );
}

FrameReportInstance::~FrameReportInstance()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameReportInstance::exit ) );
	btn_back->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportInstance::btnBackClicked ), NULL, this );
	cb_overdue->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( FrameReportInstance::overdueChanged ), NULL, this );
	btn_report->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportInstance::btnReportClicked ), NULL, this );
	
}

FrameCreateEditCollection::FrameCreateEditCollection( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	pnl_form_collection = new wxPanel( this, ID_PNL_FORM_COLLECTION, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 3, 0, 0 );
	
	lbl_collection_id = new wxStaticText( pnl_form_collection, ID_LBL_COLLECTION_ID, wxT("ID"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_collection_id->Wrap( -1 );
	gSizer1->Add( lbl_collection_id, 0, wxALL, 5 );
	
	txt_collection_id = new wxStaticText( pnl_form_collection, ID_TXT_COLLECTION_ID, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	txt_collection_id->Wrap( -1 );
	gSizer1->Add( txt_collection_id, 0, wxALL, 5 );
	
	m_staticText72 = new wxStaticText( pnl_form_collection, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	gSizer1->Add( m_staticText72, 0, wxALL, 5 );
	
	lbl_collection_type = new wxStaticText( pnl_form_collection, ID_LBL_COLLECTION_TYPE, wxT("Collection Type"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_collection_type->Wrap( -1 );
	gSizer1->Add( lbl_collection_type, 0, wxALL, 5 );
	
	wxString choice_collection_typeChoices[] = { wxT("Choose a collection type") };
	int choice_collection_typeNChoices = sizeof( choice_collection_typeChoices ) / sizeof( wxString );
	choice_collection_type = new wxChoice( pnl_form_collection, ID_CHOICE_COLLECTION_TYPE, wxDefaultPosition, wxDefaultSize, choice_collection_typeNChoices, choice_collection_typeChoices, 0 );
	choice_collection_type->SetSelection( 0 );
	gSizer1->Add( choice_collection_type, 0, wxALL, 5 );
	
	lbl_error_collection_type = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_COLLECTION_TYPE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_collection_type->Wrap( -1 );
	lbl_error_collection_type->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_collection_type, 0, wxALL, 5 );
	
	lbl_data_type = new wxStaticText( pnl_form_collection, ID_LBL_DATA_TYPE, wxT("Data Type"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_data_type->Wrap( -1 );
	gSizer1->Add( lbl_data_type, 0, wxALL, 5 );
	
	wxString choice_data_typeChoices[] = { wxT("Choose a data type") };
	int choice_data_typeNChoices = sizeof( choice_data_typeChoices ) / sizeof( wxString );
	choice_data_type = new wxChoice( pnl_form_collection, ID_CHOICE_DATA_TYPE, wxDefaultPosition, wxDefaultSize, choice_data_typeNChoices, choice_data_typeChoices, 0 );
	choice_data_type->SetSelection( 0 );
	gSizer1->Add( choice_data_type, 0, wxALL, 5 );
	
	lbl_error_data_type = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_DATA_TYPE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_data_type->Wrap( -1 );
	lbl_error_data_type->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_data_type, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( pnl_form_collection, wxID_ANY, wxT("Title"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	gSizer1->Add( m_staticText7, 0, wxALL, 5 );
	
	txt_title = new wxTextCtrl( pnl_form_collection, ID_TXT_TITLE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( txt_title, 0, wxALL, 5 );
	
	lbl_error_title = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_TITLE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_title->Wrap( -1 );
	lbl_error_title->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_title, 0, wxALL, 5 );
	
	m_staticText64 = new wxStaticText( pnl_form_collection, wxID_ANY, wxT("Author"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText64->Wrap( -1 );
	gSizer1->Add( m_staticText64, 0, wxALL, 5 );
	
	txt_author = new wxTextCtrl( pnl_form_collection, ID_TXT_AUTHOR, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( txt_author, 0, wxALL, 5 );
	
	lbl_error_author = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_AUTHOR, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_author->Wrap( -1 );
	lbl_error_author->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_author, 0, wxALL, 5 );
	
	m_staticText14 = new wxStaticText( pnl_form_collection, wxID_ANY, wxT("Category"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	gSizer1->Add( m_staticText14, 0, wxALL, 5 );
	
	wxString choice_categoryChoices[] = { wxT("Choose a category") };
	int choice_categoryNChoices = sizeof( choice_categoryChoices ) / sizeof( wxString );
	choice_category = new wxChoice( pnl_form_collection, ID_CHOICE_CATEGORY, wxDefaultPosition, wxDefaultSize, choice_categoryNChoices, choice_categoryChoices, 0 );
	choice_category->SetSelection( 0 );
	gSizer1->Add( choice_category, 0, wxALL, 5 );
	
	lbl_error_category = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_CATEGORY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_category->Wrap( -1 );
	lbl_error_category->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_category, 0, wxALL, 5 );
	
	m_staticText8 = new wxStaticText( pnl_form_collection, wxID_ANY, wxT("Version"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	gSizer1->Add( m_staticText8, 0, wxALL, 5 );
	
	txt_version = new wxTextCtrl( pnl_form_collection, ID_TXT_VERSION, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( txt_version, 0, wxALL, 5 );
	
	lbl_error_version = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_VERSION, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_version->Wrap( -1 );
	lbl_error_version->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_version, 0, wxALL, 5 );
	
	m_staticText9 = new wxStaticText( pnl_form_collection, wxID_ANY, wxT("Publisher"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	gSizer1->Add( m_staticText9, 0, wxALL, 5 );
	
	txt_publisher = new wxTextCtrl( pnl_form_collection, ID_TXT_PUBLISHER, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( txt_publisher, 0, wxALL, 5 );
	
	lbl_error_publisher = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_PUBLISHER, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_publisher->Wrap( -1 );
	lbl_error_publisher->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_publisher, 0, wxALL, 5 );
	
	lbl_year = new wxStaticText( pnl_form_collection, wxID_ANY, wxT("Year"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_year->Wrap( -1 );
	gSizer1->Add( lbl_year, 0, wxALL, 5 );
	
	wxString choice_yearChoices[] = { wxT("Choose a year") };
	int choice_yearNChoices = sizeof( choice_yearChoices ) / sizeof( wxString );
	choice_year = new wxChoice( pnl_form_collection, ID_CHOICE_YEAR, wxDefaultPosition, wxDefaultSize, choice_yearNChoices, choice_yearChoices, 0 );
	choice_year->SetSelection( 0 );
	gSizer1->Add( choice_year, 0, wxALL, 5 );
	
	lbl_error_year = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_YEAR, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_year->Wrap( -1 );
	lbl_error_year->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_year, 0, wxALL, 5 );
	
	m_staticText11 = new wxStaticText( pnl_form_collection, wxID_ANY, wxT("Duration (In minutes)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	gSizer1->Add( m_staticText11, 0, wxALL, 5 );
	
	txt_duration = new wxTextCtrl( pnl_form_collection, ID_TXT_DURATION, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( txt_duration, 0, wxALL, 5 );
	
	lbl_error_duration = new wxStaticText( pnl_form_collection, ID_LBL_ERROR_DURATION, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_duration->Wrap( -1 );
	lbl_error_duration->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer1->Add( lbl_error_duration, 0, wxALL, 5 );
	
	
	pnl_form_collection->SetSizer( gSizer1 );
	pnl_form_collection->Layout();
	gSizer1->Fit( pnl_form_collection );
	bSizer8->Add( pnl_form_collection, 1, wxEXPAND | wxALL, 5 );
	
	btn_ok_collection = new wxButton( this, ID_BTN_OK_COLLECTION, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( btn_ok_collection, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer8 );
	this->Layout();
	m_toolBar7 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back_create_collection = new wxButton( m_toolBar7, ID_BTN_BACK_CREATE_COLLECTION, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar7->AddControl( btn_back_create_collection );
	btn_home_create_collection = new wxButton( m_toolBar7, ID_BTN_HOME_CREATE_COLLECTION, wxT("Home"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar7->AddControl( btn_home_create_collection );
	m_toolBar7->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameCreateEditCollection::exit ) );
	txt_duration->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditCollection::inputDuration ), NULL, this );
	btn_ok_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditCollection::btnOKCollectionClicked ), NULL, this );
	btn_back_create_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditCollection::btnBackCreateCollectionClicked ), NULL, this );
	btn_home_create_collection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditCollection::btnHomeCreateCollectionClicked ), NULL, this );
}

FrameCreateEditCollection::~FrameCreateEditCollection()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameCreateEditCollection::exit ) );
	txt_duration->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditCollection::inputDuration ), NULL, this );
	btn_ok_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditCollection::btnOKCollectionClicked ), NULL, this );
	btn_back_create_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditCollection::btnBackCreateCollectionClicked ), NULL, this );
	btn_home_create_collection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditCollection::btnHomeCreateCollectionClicked ), NULL, this );
	
}

FrameReportOverdue::FrameReportOverdue( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	m_toolBar13 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL ); 
	btn_back = new wxButton( m_toolBar13, ID_BTN_BACK_REPORT_OVERDUE, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar13->AddControl( btn_back );
	m_toolBar13->Realize(); 
	
	bSizer17->Add( m_toolBar13, 0, wxEXPAND, 5 );
	
	tbl_borrower = new wxGrid( this, ID_TBL_REPORT_OVERDUE, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	tbl_borrower->CreateGrid( 10, 5 );
	tbl_borrower->EnableEditing( false );
	tbl_borrower->EnableGridLines( true );
	tbl_borrower->EnableDragGridSize( false );
	tbl_borrower->SetMargins( 0, 0 );
	
	// Columns
	tbl_borrower->SetColSize( 0, 149 );
	tbl_borrower->SetColSize( 1, 104 );
	tbl_borrower->SetColSize( 2, 244 );
	tbl_borrower->SetColSize( 3, 157 );
	tbl_borrower->SetColSize( 4, 210 );
	tbl_borrower->EnableDragColMove( false );
	tbl_borrower->EnableDragColSize( true );
	tbl_borrower->SetColLabelSize( 30 );
	tbl_borrower->SetColLabelValue( 0, wxT("Borrower ID") );
	tbl_borrower->SetColLabelValue( 1, wxT("Item Barcode") );
	tbl_borrower->SetColLabelValue( 2, wxT("Borrower Name") );
	tbl_borrower->SetColLabelValue( 3, wxT("Mobile Number") );
	tbl_borrower->SetColLabelValue( 4, wxT("Deadline") );
	tbl_borrower->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	tbl_borrower->EnableDragRowSize( true );
	tbl_borrower->SetRowLabelSize( 80 );
	tbl_borrower->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	tbl_borrower->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer17->Add( tbl_borrower, 0, wxALL, 5 );
	
	m_panel24 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer11;
	gbSizer11 = new wxGridBagSizer( 0, 0 );
	gbSizer11->SetFlexibleDirection( wxBOTH );
	gbSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_previous = new wxButton( m_panel24, ID_BTN_PREVIOUS_REPORT_OVERDUE, wxT("Previous"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_previous->Enable( false );
	
	gbSizer11->Add( btn_previous, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_next = new wxButton( m_panel24, ID_BTN_NEXT_REPORT_OVERDUE, wxT("Next"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer11->Add( btn_next, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel24->SetSizer( gbSizer11 );
	m_panel24->Layout();
	gbSizer11->Fit( m_panel24 );
	bSizer17->Add( m_panel24, 1, wxEXPAND | wxALL, 5 );
	
	m_panel241 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer111;
	gbSizer111 = new wxGridBagSizer( 0, 0 );
	gbSizer111->SetFlexibleDirection( wxBOTH );
	gbSizer111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	btn_save = new wxButton( m_panel241, ID_SAVE_OVERDUE, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer111->Add( btn_save, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	btn_print = new wxButton( m_panel241, ID_BTN_PRINT_OVERDUE, wxT("Print"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer111->Add( btn_print, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	m_panel241->SetSizer( gbSizer111 );
	m_panel241->Layout();
	gbSizer111->Fit( m_panel241 );
	bSizer17->Add( m_panel241, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer17 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameReportOverdue::exit ) );
	btn_back->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnBackClicked ), NULL, this );
	btn_previous->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnPreviousClicked ), NULL, this );
	btn_next->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnNextClicked ), NULL, this );
	btn_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnSaveClicked ), NULL, this );
	btn_print->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnPrintClicked ), NULL, this );
}

FrameReportOverdue::~FrameReportOverdue()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameReportOverdue::exit ) );
	btn_back->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnBackClicked ), NULL, this );
	btn_previous->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnPreviousClicked ), NULL, this );
	btn_next->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnNextClicked ), NULL, this );
	btn_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnSaveClicked ), NULL, this );
	btn_print->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameReportOverdue::btnPrintClicked ), NULL, this );
	
}

DialogDeleteError::DialogDeleteError( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );
	
	lbl_delete_error = new wxStaticText( this, ID_LBL_DELETE_ERROR, wxT("Failed to delete "), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_delete_error->Wrap( -1 );
	bSizer18->Add( lbl_delete_error, 0, wxALL, 5 );
	
	btn_ok = new wxButton( this, ID_BTN_DELETE_OK, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( btn_ok, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer18 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogDeleteError::exit ) );
	btn_ok->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogDeleteError::btnOKClicked ), NULL, this );
}

DialogDeleteError::~DialogDeleteError()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogDeleteError::exit ) );
	btn_ok->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogDeleteError::btnOKClicked ), NULL, this );
	
}

DialogAddInstances::DialogAddInstances( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("Would you like to add instances for this collection?"), wxPoint( -1,-1 ), wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	bSizer8->Add( m_staticText30, 0, wxALL, 5 );
	
	m_panel10 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer4;
	gSizer4 = new wxGridSizer( 0, 2, 0, 0 );
	
	btn_yes_add_instance = new wxButton( m_panel10, ID_YES_ADD_INSTANCE, wxT("Yes"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer4->Add( btn_yes_add_instance, 0, wxALL, 5 );
	
	btn_no_add_instance = new wxButton( m_panel10, ID_BTN_NO_ADD_INSTANCE, wxT("No"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer4->Add( btn_no_add_instance, 0, wxALL, 5 );
	
	
	m_panel10->SetSizer( gSizer4 );
	m_panel10->Layout();
	gSizer4->Fit( m_panel10 );
	bSizer8->Add( m_panel10, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer8 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogAddInstances::exit ) );
	btn_yes_add_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAddInstances::btnYesAddInstanceClicked ), NULL, this );
	btn_no_add_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAddInstances::btnNoAddInstanceClicked ), NULL, this );
}

DialogAddInstances::~DialogAddInstances()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogAddInstances::exit ) );
	btn_yes_add_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAddInstances::btnYesAddInstanceClicked ), NULL, this );
	btn_no_add_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAddInstances::btnNoAddInstanceClicked ), NULL, this );
	
}

FrameCreateEditInstance::FrameCreateEditInstance( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	lbl_instance_collection = new wxStaticText( this, ID_LBL_INSTANCE_COLLECTION, wxT("Add instances for "), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_instance_collection->Wrap( -1 );
	lbl_instance_collection->SetFont( wxFont( 15, 70, 90, 90, false, wxEmptyString ) );
	lbl_instance_collection->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	lbl_instance_collection->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer6->Add( lbl_instance_collection, 0, wxALL, 5 );
	
	m_panel7 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 0, 3, 0, 0 );
	
	lbl_barcode = new wxStaticText( m_panel7, ID_LBL_BARCODE, wxT("Barcode"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_barcode->Wrap( -1 );
	gSizer3->Add( lbl_barcode, 0, wxALL, 5 );
	
	txt_barcode = new wxStaticText( m_panel7, ID_TXT_BARCODE_EDIT, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	txt_barcode->Wrap( -1 );
	gSizer3->Add( txt_barcode, 0, wxALL, 5 );
	
	m_staticText69 = new wxStaticText( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	gSizer3->Add( m_staticText69, 0, wxALL, 5 );
	
	lbl_quantity = new wxStaticText( m_panel7, ID_LBL_QUANTITY, wxT("Quantity"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_quantity->Wrap( -1 );
	gSizer3->Add( lbl_quantity, 0, wxALL, 5 );
	
	txt_quantity = new wxTextCtrl( m_panel7, ID_TXT_QUANTITY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( txt_quantity, 0, wxALL, 5 );
	
	lbl_error_quantity = new wxStaticText( m_panel7, ID_LBL_ERROR_QUANTITY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_quantity->Wrap( -1 );
	lbl_error_quantity->SetForegroundColour( wxColour( 255, 0, 0 ) );
	lbl_error_quantity->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	gSizer3->Add( lbl_error_quantity, 0, wxALL, 5 );
	
	m_staticText17 = new wxStaticText( m_panel7, wxID_ANY, wxT("Status"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	gSizer3->Add( m_staticText17, 0, wxALL, 5 );
	
	wxString choice_statusChoices[] = { wxT("Choose a status") };
	int choice_statusNChoices = sizeof( choice_statusChoices ) / sizeof( wxString );
	choice_status = new wxChoice( m_panel7, ID_CHOICE_STATUS, wxDefaultPosition, wxDefaultSize, choice_statusNChoices, choice_statusChoices, 0 );
	choice_status->SetSelection( 0 );
	gSizer3->Add( choice_status, 0, wxALL, 5 );
	
	lbl_error_status = new wxStaticText( m_panel7, ID_LBL_ERROR_QUANTITY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_status->Wrap( -1 );
	lbl_error_status->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer3->Add( lbl_error_status, 0, wxALL, 5 );
	
	lbl_borrow_times = new wxStaticText( m_panel7, ID_LBL_BORROWER_TIMES, wxT("Borrow Times"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_borrow_times->Wrap( -1 );
	gSizer3->Add( lbl_borrow_times, 0, wxALL, 5 );
	
	txt_borrow_times = new wxTextCtrl( m_panel7, ID_TXT_BORROW_TIMES, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( txt_borrow_times, 0, wxALL, 5 );
	
	lbl_error_borrow_times = new wxStaticText( m_panel7, ID_LBL_ERROR_BORROW_TIMES, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_borrow_times->Wrap( -1 );
	lbl_error_borrow_times->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer3->Add( lbl_error_borrow_times, 0, wxALL, 5 );
	
	lbl_num_days = new wxStaticText( m_panel7, ID_LBL_NUM_DAYS, wxT("Number of Days"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_num_days->Wrap( -1 );
	gSizer3->Add( lbl_num_days, 0, wxALL, 5 );
	
	txt_num_days = new wxTextCtrl( m_panel7, ID_TXT_NUM_DAYS, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( txt_num_days, 0, wxALL, 5 );
	
	lbl_error_num_days = new wxStaticText( m_panel7, ID_LBL_ERROR_NUM_DAYS, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_num_days->Wrap( -1 );
	lbl_error_num_days->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer3->Add( lbl_error_num_days, 0, wxALL, 5 );
	
	
	m_panel7->SetSizer( gSizer3 );
	m_panel7->Layout();
	gSizer3->Fit( m_panel7 );
	bSizer6->Add( m_panel7, 1, wxEXPAND | wxALL, 5 );
	
	btn_ok_instance = new wxButton( this, ID_BTN_OK_INSTANCE, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( btn_ok_instance, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	m_toolBar8 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back_create_instance = new wxButton( m_toolBar8, ID_BTN_BACK_CREATE_INSTANCE, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar8->AddControl( btn_back_create_instance );
	btn_home_create_instance = new wxButton( m_toolBar8, ID_BTN_HOME_CREATE_INSTANCE, wxT("Home"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar8->AddControl( btn_home_create_instance );
	m_toolBar8->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameCreateEditInstance::exit ) );
	txt_quantity->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditInstance::inputQuantity ), NULL, this );
	choice_status->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FrameCreateEditInstance::statusChanged ), NULL, this );
	txt_borrow_times->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditInstance::inputBorrowTimes ), NULL, this );
	txt_num_days->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditInstance::inputNumDays ), NULL, this );
	btn_ok_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditInstance::btnOKInstanceClicked ), NULL, this );
	btn_back_create_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditInstance::btnBackCreateInstanceClicked ), NULL, this );
	btn_home_create_instance->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditInstance::btnHomeCreateInstanceClicked ), NULL, this );
}

FrameCreateEditInstance::~FrameCreateEditInstance()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameCreateEditInstance::exit ) );
	txt_quantity->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditInstance::inputQuantity ), NULL, this );
	choice_status->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FrameCreateEditInstance::statusChanged ), NULL, this );
	txt_borrow_times->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditInstance::inputBorrowTimes ), NULL, this );
	txt_num_days->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditInstance::inputNumDays ), NULL, this );
	btn_ok_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditInstance::btnOKInstanceClicked ), NULL, this );
	btn_back_create_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditInstance::btnBackCreateInstanceClicked ), NULL, this );
	btn_home_create_instance->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditInstance::btnHomeCreateInstanceClicked ), NULL, this );
	
}

FrameCreateEditBorrower::FrameCreateEditBorrower( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	m_panel10 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer5;
	gSizer5 = new wxGridSizer( 0, 3, 0, 0 );
	
	lbl_borrower_id = new wxStaticText( m_panel10, ID_LBL_BORROWER_ID_EDIT, wxT("ID"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_borrower_id->Wrap( -1 );
	gSizer5->Add( lbl_borrower_id, 0, wxALL, 5 );
	
	txt_borrower_id = new wxStaticText( m_panel10, ID_TXT_BORROWER_ID_EDIT, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	txt_borrower_id->Wrap( -1 );
	gSizer5->Add( txt_borrower_id, 0, wxALL, 5 );
	
	m_staticText75 = new wxStaticText( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText75->Wrap( -1 );
	gSizer5->Add( m_staticText75, 0, wxALL, 5 );
	
	m_staticText23 = new wxStaticText( m_panel10, wxID_ANY, wxT("Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	gSizer5->Add( m_staticText23, 0, wxALL, 5 );
	
	txt_name = new wxTextCtrl( m_panel10, ID_TXT_NAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer5->Add( txt_name, 0, wxALL, 5 );
	
	lbl_error_name = new wxStaticText( m_panel10, ID_LBL_ERROR_NAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_name->Wrap( -1 );
	lbl_error_name->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_name, 0, wxALL, 5 );
	
	m_staticText24 = new wxStaticText( m_panel10, wxID_ANY, wxT("Borrower Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	gSizer5->Add( m_staticText24, 0, wxALL, 5 );
	
	wxString choice_borrower_typeChoices[] = { wxT("Choose a borrower type") };
	int choice_borrower_typeNChoices = sizeof( choice_borrower_typeChoices ) / sizeof( wxString );
	choice_borrower_type = new wxChoice( m_panel10, ID_CHOICE_BORROWER_TYPE, wxDefaultPosition, wxDefaultSize, choice_borrower_typeNChoices, choice_borrower_typeChoices, 0 );
	choice_borrower_type->SetSelection( 0 );
	gSizer5->Add( choice_borrower_type, 0, wxALL, 5 );
	
	lbl_error_borrower_type = new wxStaticText( m_panel10, ID_LBL_ERROR_BORROWER_TYPE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_borrower_type->Wrap( -1 );
	lbl_error_borrower_type->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_borrower_type, 0, wxALL, 5 );
	
	m_staticText26 = new wxStaticText( m_panel10, wxID_ANY, wxT("Department"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	gSizer5->Add( m_staticText26, 0, wxALL, 5 );
	
	wxString choice_departmentChoices[] = { wxT("Choose a department") };
	int choice_departmentNChoices = sizeof( choice_departmentChoices ) / sizeof( wxString );
	choice_department = new wxChoice( m_panel10, ID_CHOICE_DEPARTMENT, wxDefaultPosition, wxDefaultSize, choice_departmentNChoices, choice_departmentChoices, 0 );
	choice_department->SetSelection( 0 );
	gSizer5->Add( choice_department, 0, wxALL, 5 );
	
	lbl_error_department = new wxStaticText( m_panel10, ID_LBL_ERROR_DEPARTMENT, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_department->Wrap( -1 );
	lbl_error_department->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_department, 0, wxALL, 5 );
	
	m_staticText27 = new wxStaticText( m_panel10, wxID_ANY, wxT("Mobile Number"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	gSizer5->Add( m_staticText27, 0, wxALL, 5 );
	
	txt_mobile_number = new wxTextCtrl( m_panel10, ID_TXT_MOBILE_NUMBER, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer5->Add( txt_mobile_number, 0, wxALL, 5 );
	
	lbl_error_mobile = new wxStaticText( m_panel10, ID_LBL_ERROR_MOBILE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_mobile->Wrap( -1 );
	lbl_error_mobile->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_mobile, 0, wxALL, 5 );
	
	lbl_items_borrowed = new wxStaticText( m_panel10, ID_LBL_ITEMS_BORROWED, wxT("Items Borrowed"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_items_borrowed->Wrap( -1 );
	gSizer5->Add( lbl_items_borrowed, 0, wxALL, 5 );
	
	txt_items_borrowed = new wxTextCtrl( m_panel10, ID_TXT_ITEMS_BORROWED, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer5->Add( txt_items_borrowed, 0, wxALL, 5 );
	
	lbl_error_items_borrowed = new wxStaticText( m_panel10, ID_LBL_ERROR_ITEMS_BORROWED, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_items_borrowed->Wrap( -1 );
	lbl_error_items_borrowed->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_items_borrowed, 0, wxALL, 5 );
	
	lbl_items_late = new wxStaticText( m_panel10, ID_LBL_ITEMS_LATE, wxT("Items Late"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_items_late->Wrap( -1 );
	gSizer5->Add( lbl_items_late, 0, wxALL, 5 );
	
	txt_items_late = new wxTextCtrl( m_panel10, ID_TXT_ITEMS_LATE, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer5->Add( txt_items_late, 0, wxALL, 5 );
	
	lbl_error_items_late = new wxStaticText( m_panel10, ID_LBL_ERROR_ITEMS_LATE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_items_late->Wrap( -1 );
	lbl_error_items_late->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer5->Add( lbl_error_items_late, 0, wxALL, 5 );
	
	
	m_panel10->SetSizer( gSizer5 );
	m_panel10->Layout();
	gSizer5->Fit( m_panel10 );
	bSizer9->Add( m_panel10, 1, wxEXPAND | wxALL, 5 );
	
	btn_ok_borrower = new wxButton( this, ID_BTN_OK_BORROWER, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( btn_ok_borrower, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer9 );
	this->Layout();
	m_toolBar9 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_back_create_borrower = new wxButton( m_toolBar9, ID_BACK_CREATE_BORROWER, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar9->AddControl( btn_back_create_borrower );
	btn_home_create_borrower = new wxButton( m_toolBar9, ID_BTN_CREATE_BORROWER_CLICKED, wxT("Home"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar9->AddControl( btn_home_create_borrower );
	m_toolBar9->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameCreateEditBorrower::exit ) );
	txt_name->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditBorrower::inputName ), NULL, this );
	txt_mobile_number->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditBorrower::inputMobile ), NULL, this );
	txt_items_borrowed->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditBorrower::inputItemsBorrowed ), NULL, this );
	txt_items_late->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditBorrower::inputItemsLate ), NULL, this );
	btn_ok_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditBorrower::btnOKBorrowerClicked ), NULL, this );
	btn_back_create_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditBorrower::btnBackCreateBorrowerClicked ), NULL, this );
	btn_home_create_borrower->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditBorrower::btnHomeCreateBorrowerClicked ), NULL, this );
}

FrameCreateEditBorrower::~FrameCreateEditBorrower()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameCreateEditBorrower::exit ) );
	txt_name->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditBorrower::inputName ), NULL, this );
	txt_mobile_number->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditBorrower::inputMobile ), NULL, this );
	txt_items_borrowed->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditBorrower::inputItemsBorrowed ), NULL, this );
	txt_items_late->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameCreateEditBorrower::inputItemsLate ), NULL, this );
	btn_ok_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditBorrower::btnOKBorrowerClicked ), NULL, this );
	btn_back_create_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditBorrower::btnBackCreateBorrowerClicked ), NULL, this );
	btn_home_create_borrower->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameCreateEditBorrower::btnHomeCreateBorrowerClicked ), NULL, this );
	
}

FrameChangeItemStatus::FrameChangeItemStatus( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	lbl_error_change_item = new wxStaticText( this, ID_LBL_ERROR_CHANGE_ITEM, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_change_item->Wrap( -1 );
	lbl_error_change_item->SetForegroundColour( wxColour( 255, 0, 0 ) );
	lbl_error_change_item->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer11->Add( lbl_error_change_item, 0, wxALL, 5 );
	
	m_panel16 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer7;
	gSizer7 = new wxGridSizer( 0, 3, 0, 0 );
	
	m_staticText57 = new wxStaticText( m_panel16, ID_LBL_ITEM_BARCODE_CHANGE, wxT("Item Barcode"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	gSizer7->Add( m_staticText57, 0, wxALL, 5 );
	
	txt_item_barcode_change = new wxTextCtrl( m_panel16, ID_TXT_ITEM_BARCODE_CHANGE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( txt_item_barcode_change, 0, wxALL, 5 );
	
	lbl_error_item_barcode_change = new wxStaticText( m_panel16, ID_LBL_ERROR_ITEM_BARCODE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_item_barcode_change->Wrap( -1 );
	lbl_error_item_barcode_change->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer7->Add( lbl_error_item_barcode_change, 0, wxALL, 5 );
	
	lbl_title_change = new wxStaticText( m_panel16, ID_LBL_TITLE_CHANGE, wxT("Title"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_title_change->Wrap( -1 );
	gSizer7->Add( lbl_title_change, 0, wxALL, 5 );
	
	txt_title_change = new wxTextCtrl( m_panel16, ID_TITLE_CHANGE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( txt_title_change, 0, wxALL, 5 );
	
	lbl_error_title_change = new wxStaticText( m_panel16, ID_LBL_ERROR_TITLE_CHANGE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_title_change->Wrap( -1 );
	lbl_error_title_change->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer7->Add( lbl_error_title_change, 0, wxALL, 5 );
	
	lbl_author_change = new wxStaticText( m_panel16, ID_LBL_AUTHOR_CHANGE, wxT("Author"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_author_change->Wrap( -1 );
	gSizer7->Add( lbl_author_change, 0, wxALL, 5 );
	
	txt_author_change = new wxTextCtrl( m_panel16, ID_TXT_AUTHOR_CHANGE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( txt_author_change, 0, wxALL, 5 );
	
	lbl_error_author_change = new wxStaticText( m_panel16, ID_LBL_AUTHOR_CHANGE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_author_change->Wrap( -1 );
	lbl_error_author_change->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer7->Add( lbl_error_author_change, 0, wxALL, 5 );
	
	
	m_panel16->SetSizer( gSizer7 );
	m_panel16->Layout();
	gSizer7->Fit( m_panel16 );
	bSizer11->Add( m_panel16, 1, wxEXPAND | wxALL, 5 );
	
	btn_confirm_change = new wxButton( this, ID_BTN_CONFIRM_CHANGE, wxT("Confirm"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( btn_confirm_change, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	m_toolBar9 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	btn_cancel_change = new wxButton( m_toolBar9, ID_BTN_CANCEL_CHANGE, wxT("Back"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar9->AddControl( btn_cancel_change );
	m_toolBar9->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameChangeItemStatus::exit ) );
	txt_item_barcode_change->Connect( wxEVT_CHAR, wxKeyEventHandler( FrameChangeItemStatus::inputItemBarcodeChange ), NULL, this );
	txt_item_barcode_change->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FrameChangeItemStatus::updateTitleAuthor ), NULL, this );
	txt_title_change->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FrameChangeItemStatus::inputTitleChange ), NULL, this );
	txt_author_change->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FrameChangeItemStatus::inputAuthorChange ), NULL, this );
	btn_confirm_change->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameChangeItemStatus::btnConfirmChangeClicked ), NULL, this );
	btn_cancel_change->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameChangeItemStatus::btnCancelChangeClicked ), NULL, this );
}

FrameChangeItemStatus::~FrameChangeItemStatus()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FrameChangeItemStatus::exit ) );
	txt_item_barcode_change->Disconnect( wxEVT_CHAR, wxKeyEventHandler( FrameChangeItemStatus::inputItemBarcodeChange ), NULL, this );
	txt_item_barcode_change->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FrameChangeItemStatus::updateTitleAuthor ), NULL, this );
	txt_title_change->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FrameChangeItemStatus::inputTitleChange ), NULL, this );
	txt_author_change->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FrameChangeItemStatus::inputAuthorChange ), NULL, this );
	btn_confirm_change->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameChangeItemStatus::btnConfirmChangeClicked ), NULL, this );
	btn_cancel_change->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FrameChangeItemStatus::btnCancelChangeClicked ), NULL, this );
	
}

DialogConfirm::DialogConfirm( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	lbl_confirm_message = new wxStaticText( this, ID_LBL_CONFIRM_MESSAGEE, wxT("Message"), wxDefaultPosition, wxDefaultSize, 0 );
	lbl_confirm_message->Wrap( -1 );
	bSizer15->Add( lbl_confirm_message, 0, wxALL, 5 );
	
	m_panel23 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer10;
	gSizer10 = new wxGridSizer( 0, 2, 0, 0 );
	
	btn_confirm_yes = new wxButton( m_panel23, ID_BTN_CONFIRM_YES, wxT("Yes"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer10->Add( btn_confirm_yes, 0, wxALL, 5 );
	
	btn_confirm_no = new wxButton( m_panel23, ID_BTN_CONFIRM_NO, wxT("No"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer10->Add( btn_confirm_no, 0, wxALL, 5 );
	
	
	m_panel23->SetSizer( gSizer10 );
	m_panel23->Layout();
	gSizer10->Fit( m_panel23 );
	bSizer15->Add( m_panel23, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer15 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogConfirm::exit ) );
	btn_confirm_yes->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogConfirm::btnYesClicked ), NULL, this );
	btn_confirm_no->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogConfirm::btnNoClicked ), NULL, this );
}

DialogConfirm::~DialogConfirm()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogConfirm::exit ) );
	btn_confirm_yes->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogConfirm::btnYesClicked ), NULL, this );
	btn_confirm_no->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogConfirm::btnNoClicked ), NULL, this );
	
}

DialogSaveFile::DialogSaveFile( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxGridSizer* gSizer11;
	gSizer11 = new wxGridSizer( 0, 3, 0, 0 );
	
	m_staticText84 = new wxStaticText( this, wxID_ANY, wxT("File Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText84->Wrap( -1 );
	gSizer11->Add( m_staticText84, 0, wxALL, 5 );
	
	txt_file_name = new wxTextCtrl( this, ID_TXT_FILE_NAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( txt_file_name, 0, wxALL, 5 );
	
	lbl_error_file_name = new wxStaticText( this, ID_LBL_ERROR_FILE_NAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	lbl_error_file_name->Wrap( -1 );
	lbl_error_file_name->SetForegroundColour( wxColour( 255, 0, 0 ) );
	
	gSizer11->Add( lbl_error_file_name, 0, wxALL, 5 );
	
	btn_save = new wxButton( this, ID_BTN_SAVE_DIALOG, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( btn_save, 0, wxALL, 5 );
	
	btn_cancel = new wxButton( this, ID_BTN_CANCEL_SAVE_FILE, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( btn_cancel, 0, wxALL, 5 );
	
	
	this->SetSizer( gSizer11 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogSaveFile::exit ) );
	btn_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogSaveFile::btnSaveClicked ), NULL, this );
	btn_cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogSaveFile::btnCancelClicked ), NULL, this );
}

DialogSaveFile::~DialogSaveFile()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DialogSaveFile::exit ) );
	btn_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogSaveFile::btnSaveClicked ), NULL, this );
	btn_cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogSaveFile::btnCancelClicked ), NULL, this );
	
}
