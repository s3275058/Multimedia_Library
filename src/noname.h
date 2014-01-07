///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2013)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __NONAME_H__
#define __NONAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/toolbar.h>
#include <wx/stattext.h>
#include <wx/listbox.h>
#include <wx/filepicker.h>
#include <wx/gbsizer.h>
#include <wx/dialog.h>
#include <wx/choice.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/radiobox.h>
#include <wx/checkbox.h>

///////////////////////////////////////////////////////////////////////////

#define ID_FRAME_MAIN 1000
#define ID_BTN_COLLECTION 1001
#define ID_BTN_BORROWER 1002
#define ID_BTN_BORROW_ITEM 1003
#define ID_BTN_CHANGE_ITEM_STATUS 1004
#define ID_BTN_DOWNLOAD 1005
#define ID_BTN_REPORT_COLLECTION 1006
#define ID_BTN_INSTANCE_REPORT 1007
#define ID_BTN_OVERDUE_REPORT 1008
#define ID_FRAME_DOWNLOAD 1009
#define ID_BTN_BACK_DOWNLOAD 1010
#define ID_LST_REPORT 1011
#define ID_BTN_DOWNLOAD_REPORT 1012
#define ID_DIALOG_DOWNLOAD_LOCATION 1013
#define ID_DPK_LOCATION 1014
#define ID_BTN_OK_DOWNLOAD 1015
#define ID_BTN_CANCEL_DOWNLOAD 1016
#define ID_FRAME_REPORT_COLLECTION 1017
#define ID_CHOICE_REPORT_COLLECTION_TYPE 1018
#define ID_CHOICE_REPORT_DATA_TYPE 1019
#define ID_CHOICE_REPORT_CATEGORY 1020
#define ID_BTN_GET_REPORT 1021
#define ID_BTN_BACK_REPORT_COLLECTION 1022
#define ID_FRAME_BORROW_ITEM 1023
#define ID_TXT_BORROWER_ID 1024
#define ID_LBL_BORROWER_ID 1025
#define ID_LBL_BORROWER_NAME 1026
#define ID_TXT_BORROWER_NAME 1027
#define ID_LBL_ITEM_BARCODE 1028
#define ID_TXT_ITEM_BARCODE 1029
#define ID_LBL_ERROR_ITEM_BARCODE 1030
#define ID_LBL_COLLECTION_NAME 1031
#define ID_LBL_BORROW_DAYS 1032
#define ID_TXT_BORROW_DAYS 1033
#define ID_LBL_ERROR_BORROW_DAYS 1034
#define ID_BTN_CONFIRM_BORROW 1035
#define ID_BTN_CANCEL_BORROW 1036
#define ID_FRAME_RETURN_ITEM 1037
#define ID_LBL_ITEM_BARCODE_RETURN 1038
#define ID_TXT_ITEM_BARCODE_RETURN 1039
#define ID_LBL_ERROR_ITEM_BARCODE_RETURN 1040
#define ID_LBL_DAYS_LATE 1041
#define ID_TXT_DAYS_LATE 1042
#define ID_BTN_CONFIRM_RETURN_ITEM 1043
#define ID_BTN_CANCEL_RETURN_ITEM 1044
#define ID_FRAME_COLLECTION 1045
#define ID_TBL_COLLECTION 1046
#define ID_CHOICE_SORT_COLLECTION 1047
#define ID_RDB_ORDER_COLLECTION 1048
#define ID_BTN_PREVIOUS_COLLECTION 1049
#define ID_BTN_NEXT_COLLECTION 1050
#define ID_PNL_COLLECTION 1051
#define ID_BTN_ADD_COLLECTION 1052
#define ID_BTN_VIEW_INSTANCES 1053
#define ID_BTN_EDIT_COLLECTIOTN 1054
#define ID_BTN_DELETE_COLLECTION 1055
#define ID_BTN_SAVE_COLLECTION 1056
#define ID_BTN_PRINT_COLLECTION 1057
#define ID_BTN_BACK 1058
#define ID_FRAME_INSTANCE 1059
#define ID_TBL_INSTANCE 1060
#define ID_CHOICE_SORT_INSTANCE 1061
#define ID_RDB_ORDER_INSTANCE 1062
#define ID_BTN_PREVIOUS_INSTANCE 1063
#define ID_BTN_NEXT_INSTANCE 1064
#define ID_BTN_EDIT_INSTANCE 1065
#define ID_BTN_DELETE_INSTANCE 1066
#define ID_BTN_SAVE_INSTANCE 1067
#define ID_BTN_PRINT_INSTANCE 1068
#define ID_BTN_BACK_INSTANCE 1069
#define ID_BTN_HOME_INSTANCE 1070
#define ID_FRAME_BORROWER 1071
#define ID_TBL_BORROWER 1072
#define ID_CHOICE_SORT_BORROWER 1073
#define ID_PREVIOUS_BORROWER 1074
#define ID_NEXT_BORROWER 1075
#define ID_BTN_ADD_BORROWER 1076
#define ID_BTN_EDIT_BORROWER 1077
#define ID_BTN_DELETE_BORROWER 1078
#define ID_BTN_SAVE_BORROWER 1079
#define ID_BTN_PRINT_BORROWER 1080
#define ID_BTN_BACK_BORROWER 1081
#define ID_FRAME_REPORT_INSTANCE 1082
#define ID_BTN_BACK_REPORT_INSTANCE 1083
#define ID_TXT_REPORT_INSTANCE_ID 1084
#define ID_LBL_ERROR_REPORT_INSTANCE_COLLECTION 1085
#define ID_CB_BORROWED 1086
#define ID_CB_OVERDUE 1087
#define ID_BTB_GET_REPORT_INSTANCE 1088
#define ID_FRAME_CREATE_EDIT_COLLECTION 1089
#define ID_PNL_FORM_COLLECTION 1090
#define ID_LBL_COLLECTION_ID 1091
#define ID_TXT_COLLECTION_ID 1092
#define ID_LBL_COLLECTION_TYPE 1093
#define ID_CHOICE_COLLECTION_TYPE 1094
#define ID_LBL_ERROR_COLLECTION_TYPE 1095
#define ID_LBL_DATA_TYPE 1096
#define ID_CHOICE_DATA_TYPE 1097
#define ID_LBL_ERROR_DATA_TYPE 1098
#define ID_TXT_TITLE 1099
#define ID_LBL_ERROR_TITLE 1100
#define ID_TXT_AUTHOR 1101
#define ID_LBL_ERROR_AUTHOR 1102
#define ID_CHOICE_CATEGORY 1103
#define ID_LBL_ERROR_CATEGORY 1104
#define ID_TXT_VERSION 1105
#define ID_LBL_ERROR_VERSION 1106
#define ID_TXT_PUBLISHER 1107
#define ID_LBL_ERROR_PUBLISHER 1108
#define ID_CHOICE_YEAR 1109
#define ID_LBL_ERROR_YEAR 1110
#define ID_TXT_DURATION 1111
#define ID_LBL_ERROR_DURATION 1112
#define ID_BTN_OK_COLLECTION 1113
#define ID_BTN_BACK_CREATE_COLLECTION 1114
#define ID_BTN_HOME_CREATE_COLLECTION 1115
#define ID_FRAME_REPORT_OVERDUE 1116
#define ID_BTN_BACK_REPORT_OVERDUE 1117
#define ID_TBL_REPORT_OVERDUE 1118
#define ID_BTN_PREVIOUS_REPORT_OVERDUE 1119
#define ID_BTN_NEXT_REPORT_OVERDUE 1120
#define ID_SAVE_OVERDUE 1121
#define ID_BTN_PRINT_OVERDUE 1122
#define ID_FORM_DELETE_RROR 1123
#define ID_LBL_DELETE_ERROR 1124
#define ID_BTN_DELETE_OK 1125
#define ID_DIALOG_ADD_INSTANCES 1126
#define ID_YES_ADD_INSTANCE 1127
#define ID_BTN_NO_ADD_INSTANCE 1128
#define ID_FRAME_CREATE_EDIT_INSTANCE 1129
#define ID_LBL_INSTANCE_COLLECTION 1130
#define ID_LBL_BARCODE 1131
#define ID_TXT_BARCODE_EDIT 1132
#define ID_LBL_QUANTITY 1133
#define ID_TXT_QUANTITY 1134
#define ID_LBL_ERROR_QUANTITY 1135
#define ID_CHOICE_STATUS 1136
#define ID_LBL_BORROWER_TIMES 1137
#define ID_TXT_BORROW_TIMES 1138
#define ID_LBL_ERROR_BORROW_TIMES 1139
#define ID_LBL_NUM_DAYS 1140
#define ID_TXT_NUM_DAYS 1141
#define ID_LBL_ERROR_NUM_DAYS 1142
#define ID_BTN_OK_INSTANCE 1143
#define ID_BTN_BACK_CREATE_INSTANCE 1144
#define ID_BTN_HOME_CREATE_INSTANCE 1145
#define ID_FRAME_CREATE_EDIT_BORROWER 1146
#define ID_LBL_BORROWER_ID_EDIT 1147
#define ID_TXT_BORROWER_ID_EDIT 1148
#define ID_TXT_NAME 1149
#define ID_LBL_ERROR_NAME 1150
#define ID_CHOICE_BORROWER_TYPE 1151
#define ID_LBL_ERROR_BORROWER_TYPE 1152
#define ID_CHOICE_DEPARTMENT 1153
#define ID_LBL_ERROR_DEPARTMENT 1154
#define ID_TXT_MOBILE_NUMBER 1155
#define ID_LBL_ERROR_MOBILE 1156
#define ID_LBL_ITEMS_BORROWED 1157
#define ID_TXT_ITEMS_BORROWED 1158
#define ID_LBL_ERROR_ITEMS_BORROWED 1159
#define ID_LBL_ITEMS_LATE 1160
#define ID_TXT_ITEMS_LATE 1161
#define ID_LBL_ERROR_ITEMS_LATE 1162
#define ID_BTN_OK_BORROWER 1163
#define ID_BACK_CREATE_BORROWER 1164
#define ID_BTN_CREATE_BORROWER_CLICKED 1165
#define ID_LBL_ERROR_CHANGE_ITEM 1166
#define ID_LBL_ITEM_BARCODE_CHANGE 1167
#define ID_TXT_ITEM_BARCODE_CHANGE 1168
#define ID_LBL_TITLE_CHANGE 1169
#define ID_TITLE_CHANGE 1170
#define ID_LBL_ERROR_TITLE_CHANGE 1171
#define ID_LBL_AUTHOR_CHANGE 1172
#define ID_TXT_AUTHOR_CHANGE 1173
#define ID_BTN_CONFIRM_CHANGE 1174
#define ID_BTN_CANCEL_CHANGE 1175
#define ID_DIALOG_CONFIRM 1176
#define ID_LBL_CONFIRM_MESSAGEE 1177
#define ID_BTN_CONFIRM_YES 1178
#define ID_BTN_CONFIRM_NO 1179
#define ID_DIALOG_SAVE_FILE 1180
#define ID_TXT_FILE_NAME 1181
#define ID_LBL_ERROR_FILE_NAME 1182
#define ID_BTN_SAVE_DIALOG 1183
#define ID_BTN_CANCEL_SAVE_FILE 1184

///////////////////////////////////////////////////////////////////////////////
/// Class FrameMain
///////////////////////////////////////////////////////////////////////////////
class FrameMain : public wxFrame 
{
	private:
	
	protected:
		wxPanel* m_panel9;
		wxButton* btn_collection;
		wxButton* btn_borrower;
		wxPanel* m_panel10;
		wxButton* btn_borrow_item;
		wxButton* btn_return_item;
		wxButton* btn_change_item_status;
		wxButton* btn_download;
		wxPanel* m_panel91;
		wxButton* btn_report_collection;
		wxButton* btn_report_instance;
		wxButton* btn_report_overdue;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBorrowItemClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnReturnItemClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnChangeItemStatusClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDownloadClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnReportCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnReportInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnReportOverdueClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameMain( wxWindow* parent, wxWindowID id = ID_FRAME_MAIN, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,645 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameMain();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameDownload
///////////////////////////////////////////////////////////////////////////////
class FrameDownload : public wxFrame 
{
	private:
	
	protected:
		wxToolBar* m_toolBar13;
		wxButton* btn_back;
		wxStaticText* m_staticText86;
		wxListBox* lst_report;
		wxButton* btn_download;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnBackClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void reportChosen( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDownloadClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameDownload( wxWindow* parent, wxWindowID id = ID_FRAME_DOWNLOAD, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameDownload();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogDownloadLocation
///////////////////////////////////////////////////////////////////////////////
class DialogDownloadLocation : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText87;
		wxDirPickerCtrl* dpk_location;
		wxPanel* m_panel25;
		wxButton* btn_ok;
		wxButton* btn_cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void locationSelected( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void btnOKClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancelClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogDownloadLocation( wxWindow* parent, wxWindowID id = ID_DIALOG_DOWNLOAD_LOCATION, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 475,164 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogDownloadLocation();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameReportCollection
///////////////////////////////////////////////////////////////////////////////
class FrameReportCollection : public wxFrame 
{
	private:
	
	protected:
		wxPanel* m_panel20;
		wxStaticText* m_staticText76;
		wxChoice* choice_collection_type;
		wxStaticText* m_staticText77;
		wxChoice* choice_data_type;
		wxStaticText* m_staticText78;
		wxChoice* choice_category;
		wxButton* btn_get_report;
		wxToolBar* m_toolBar20;
		wxButton* btn_back;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnGetReportClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBackClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameReportCollection( wxWindow* parent, wxWindowID id = ID_FRAME_REPORT_COLLECTION, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,450 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameReportCollection();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameBorrowItem
///////////////////////////////////////////////////////////////////////////////
class FrameBorrowItem : public wxFrame 
{
	private:
	
	protected:
		wxPanel* m_panel14;
		wxStaticText* m_staticText41;
		wxTextCtrl* txt_borrower_id;
		wxStaticText* lbl_error_borrower_id;
		wxStaticText* lbl_borrower_name;
		wxStaticText* txt_borrower_name;
		wxStaticText* m_staticText49;
		wxStaticText* lbl_item_barcode;
		wxTextCtrl* txt_item_barcode;
		wxStaticText* lbl_error_item_barcode;
		wxStaticText* lbl_collection_name;
		wxStaticText* txt_collection_name;
		wxStaticText* m_staticText55;
		wxStaticText* lbl_borrow_days;
		wxTextCtrl* txt_borrow_days;
		wxStaticText* lbl_error_borrow_days;
		wxButton* btn_confirm_borrow;
		wxToolBar* m_toolBar7;
		wxButton* btn_cancel_borrow;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void inputBorrowerID( wxKeyEvent& event ) { event.Skip(); }
		virtual void inputItemBarcodeBorrow( wxKeyEvent& event ) { event.Skip(); }
		virtual void inputBorrowDays( wxKeyEvent& event ) { event.Skip(); }
		virtual void btnConfirmBorrowClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancelBorrowClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameBorrowItem( wxWindow* parent, wxWindowID id = ID_FRAME_BORROW_ITEM, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 758,515 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameBorrowItem();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameReturnItem
///////////////////////////////////////////////////////////////////////////////
class FrameReturnItem : public wxFrame 
{
	private:
	
	protected:
		wxPanel* pnl_return_item_form;
		wxStaticText* lbl_item_barcode_return;
		wxTextCtrl* txt_item_barcode_return;
		wxStaticText* lbl_error_item_barcode_return;
		wxStaticText* lbl_days_late;
		wxStaticText* txt_days_late;
		wxButton* btn_confirm_return_item;
		wxToolBar* m_toolBar8;
		wxButton* btn_cancel_return_item;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void inputItemBarcodeReturn( wxKeyEvent& event ) { event.Skip(); }
		virtual void btnConfirmReturnItemClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancelReturnItemClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameReturnItem( wxWindow* parent, wxWindowID id = ID_FRAME_RETURN_ITEM, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 726,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameReturnItem();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameCollection
///////////////////////////////////////////////////////////////////////////////
class FrameCollection : public wxFrame 
{
	private:
	
	protected:
		wxGrid* tbl_collection;
		wxPanel* m_panel21;
		wxStaticText* m_staticText79;
		wxChoice* choice_sort_collection;
		wxRadioBox* rdb_order;
		wxPanel* m_panel4;
		wxButton* btn_previous_collection;
		wxButton* btn_next_collection;
		wxPanel* pnl_collection;
		wxButton* btn_add_collection;
		wxButton* btn_view_instances;
		wxButton* btn_edit_collection;
		wxButton* btn_delete_collection;
		wxButton* btn_save;
		wxButton* btn_print;
		wxToolBar* m_toolBar2;
		wxButton* btn_back_collection;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void cellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void sortOptionChanged( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPreviousCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnNextCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnAddCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnViewInstancesClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEditCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDeleteCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSaveClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPrintClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBackCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameCollection( wxWindow* parent, wxWindowID id = ID_FRAME_COLLECTION, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1358,604 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameCollection();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameInstance
///////////////////////////////////////////////////////////////////////////////
class FrameInstance : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* lbl_collection_name;
		wxGrid* tbl_instance;
		wxPanel* m_panel21;
		wxStaticText* m_staticText79;
		wxChoice* choice_sort_instance;
		wxRadioBox* rdb_order;
		wxPanel* m_panel5;
		wxButton* btn_previous_instance;
		wxButton* btn_next_instance;
		wxPanel* m_panel18;
		wxButton* btn_add_instance;
		wxButton* btn_edit_instance;
		wxButton* btn_delete_instance;
		wxButton* btn_save;
		wxButton* btn_print;
		wxToolBar* m_toolBar3;
		wxButton* btn_back_instance;
		wxButton* btn_home_instance;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void cellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void sortOptionChanged( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPreviousInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnNextInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnAddInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEditInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDeleteInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSaveClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPrintClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBackInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHomeInstanceCicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameInstance( wxWindow* parent, wxWindowID id = ID_FRAME_INSTANCE, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1094,623 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameInstance();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameBorrower
///////////////////////////////////////////////////////////////////////////////
class FrameBorrower : public wxFrame 
{
	private:
	
	protected:
		wxGrid* tbl_borrower;
		wxPanel* m_panel21;
		wxStaticText* m_staticText79;
		wxChoice* choice_sort_instance;
		wxRadioBox* rdb_order;
		wxPanel* m_panel6;
		wxButton* btn_previous_borrower;
		wxButton* btn_next_borrower;
		wxPanel* m_panel19;
		wxButton* btn_add_borrower;
		wxButton* btn_edit_borrower;
		wxButton* btn_delete_borrower;
		wxButton* btn_save;
		wxButton* btn_print;
		wxToolBar* m_toolBar5;
		wxButton* btn_back_borrower;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void cellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void sortOptionChanged( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPreviousBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnNextBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnAddBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEditBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDeleteBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSaveClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPrintClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBackBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameBorrower( wxWindow* parent, wxWindowID id = ID_FRAME_BORROWER, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1322,632 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameBorrower();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameReportInstance
///////////////////////////////////////////////////////////////////////////////
class FrameReportInstance : public wxFrame 
{
	private:
	
	protected:
		wxToolBar* m_toolBar11;
		wxButton* btn_back;
		wxPanel* m_panel21;
		wxStaticText* m_staticText89;
		wxTextCtrl* txt_collection_id;
		wxStaticText* lbl_error_collection_id;
		wxCheckBox* cb_borrowed;
		wxCheckBox* cb_overdue;
		wxButton* btn_report;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnBackClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void overdueChanged( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnReportClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameReportInstance( wxWindow* parent, wxWindowID id = ID_FRAME_REPORT_INSTANCE, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 806,590 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameReportInstance();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameCreateEditCollection
///////////////////////////////////////////////////////////////////////////////
class FrameCreateEditCollection : public wxFrame 
{
	private:
	
	protected:
		wxPanel* pnl_form_collection;
		wxStaticText* lbl_collection_id;
		wxStaticText* txt_collection_id;
		wxStaticText* m_staticText72;
		wxStaticText* lbl_collection_type;
		wxChoice* choice_collection_type;
		wxStaticText* lbl_error_collection_type;
		wxStaticText* lbl_data_type;
		wxChoice* choice_data_type;
		wxStaticText* lbl_error_data_type;
		wxStaticText* m_staticText7;
		wxTextCtrl* txt_title;
		wxStaticText* lbl_error_title;
		wxStaticText* m_staticText64;
		wxTextCtrl* txt_author;
		wxStaticText* lbl_error_author;
		wxStaticText* m_staticText14;
		wxChoice* choice_category;
		wxStaticText* lbl_error_category;
		wxStaticText* m_staticText8;
		wxTextCtrl* txt_version;
		wxStaticText* lbl_error_version;
		wxStaticText* m_staticText9;
		wxTextCtrl* txt_publisher;
		wxStaticText* lbl_error_publisher;
		wxStaticText* lbl_year;
		wxChoice* choice_year;
		wxStaticText* lbl_error_year;
		wxStaticText* m_staticText11;
		wxTextCtrl* txt_duration;
		wxStaticText* lbl_error_duration;
		wxButton* btn_ok_collection;
		wxToolBar* m_toolBar7;
		wxButton* btn_back_create_collection;
		wxButton* btn_home_create_collection;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void inputDuration( wxKeyEvent& event ) { event.Skip(); }
		virtual void btnOKCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBackCreateCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHomeCreateCollectionClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameCreateEditCollection( wxWindow* parent, wxWindowID id = ID_FRAME_CREATE_EDIT_COLLECTION, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 861,593 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameCreateEditCollection();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameReportOverdue
///////////////////////////////////////////////////////////////////////////////
class FrameReportOverdue : public wxFrame 
{
	private:
	
	protected:
		wxToolBar* m_toolBar13;
		wxButton* btn_back;
		wxGrid* tbl_borrower;
		wxPanel* m_panel24;
		wxButton* btn_previous;
		wxButton* btn_next;
		wxPanel* m_panel241;
		wxButton* btn_save;
		wxButton* btn_print;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnBackClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPreviousClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnNextClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSaveClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPrintClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameReportOverdue( wxWindow* parent, wxWindowID id = ID_FRAME_REPORT_OVERDUE, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1007,387 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameReportOverdue();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogDeleteError
///////////////////////////////////////////////////////////////////////////////
class DialogDeleteError : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* lbl_delete_error;
		wxButton* btn_ok;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnOKClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogDeleteError( wxWindow* parent, wxWindowID id = ID_FORM_DELETE_RROR, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 734,99 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogDeleteError();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAddInstances
///////////////////////////////////////////////////////////////////////////////
class DialogAddInstances : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxPanel* m_panel10;
		wxButton* btn_yes_add_instance;
		wxButton* btn_no_add_instance;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnYesAddInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnNoAddInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogAddInstances( wxWindow* parent, wxWindowID id = ID_DIALOG_ADD_INSTANCES, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 356,103 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogAddInstances();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameCreateEditInstance
///////////////////////////////////////////////////////////////////////////////
class FrameCreateEditInstance : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* lbl_instance_collection;
		wxPanel* m_panel7;
		wxStaticText* lbl_barcode;
		wxStaticText* txt_barcode;
		wxStaticText* m_staticText69;
		wxStaticText* lbl_quantity;
		wxTextCtrl* txt_quantity;
		wxStaticText* lbl_error_quantity;
		wxStaticText* m_staticText17;
		wxChoice* choice_status;
		wxStaticText* lbl_error_status;
		wxStaticText* lbl_borrow_times;
		wxTextCtrl* txt_borrow_times;
		wxStaticText* lbl_error_borrow_times;
		wxStaticText* lbl_num_days;
		wxTextCtrl* txt_num_days;
		wxStaticText* lbl_error_num_days;
		wxButton* btn_ok_instance;
		wxToolBar* m_toolBar8;
		wxButton* btn_back_create_instance;
		wxButton* btn_home_create_instance;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void inputQuantity( wxKeyEvent& event ) { event.Skip(); }
		virtual void statusChanged( wxCommandEvent& event ) { event.Skip(); }
		virtual void inputBorrowTimes( wxKeyEvent& event ) { event.Skip(); }
		virtual void inputNumDays( wxKeyEvent& event ) { event.Skip(); }
		virtual void btnOKInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBackCreateInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHomeCreateInstanceClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameCreateEditInstance( wxWindow* parent, wxWindowID id = ID_FRAME_CREATE_EDIT_INSTANCE, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 756,453 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameCreateEditInstance();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameCreateEditBorrower
///////////////////////////////////////////////////////////////////////////////
class FrameCreateEditBorrower : public wxFrame 
{
	private:
	
	protected:
		wxPanel* m_panel10;
		wxStaticText* lbl_borrower_id;
		wxStaticText* txt_borrower_id;
		wxStaticText* m_staticText75;
		wxStaticText* m_staticText23;
		wxTextCtrl* txt_name;
		wxStaticText* lbl_error_name;
		wxStaticText* m_staticText24;
		wxChoice* choice_borrower_type;
		wxStaticText* lbl_error_borrower_type;
		wxStaticText* m_staticText26;
		wxChoice* choice_department;
		wxStaticText* lbl_error_department;
		wxStaticText* m_staticText27;
		wxTextCtrl* txt_mobile_number;
		wxStaticText* lbl_error_mobile;
		wxStaticText* lbl_items_borrowed;
		wxTextCtrl* txt_items_borrowed;
		wxStaticText* lbl_error_items_borrowed;
		wxStaticText* lbl_items_late;
		wxTextCtrl* txt_items_late;
		wxStaticText* lbl_error_items_late;
		wxButton* btn_ok_borrower;
		wxToolBar* m_toolBar9;
		wxButton* btn_back_create_borrower;
		wxButton* btn_home_create_borrower;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void inputName( wxKeyEvent& event ) { event.Skip(); }
		virtual void inputMobile( wxKeyEvent& event ) { event.Skip(); }
		virtual void inputItemsBorrowed( wxKeyEvent& event ) { event.Skip(); }
		virtual void inputItemsLate( wxKeyEvent& event ) { event.Skip(); }
		virtual void btnOKBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBackCreateBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHomeCreateBorrowerClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameCreateEditBorrower( wxWindow* parent, wxWindowID id = ID_FRAME_CREATE_EDIT_BORROWER, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 838,513 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameCreateEditBorrower();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameChangeItemStatus
///////////////////////////////////////////////////////////////////////////////
class FrameChangeItemStatus : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* lbl_error_change_item;
		wxPanel* m_panel16;
		wxStaticText* m_staticText57;
		wxTextCtrl* txt_item_barcode_change;
		wxStaticText* lbl_error_item_barcode_change;
		wxStaticText* lbl_title_change;
		wxTextCtrl* txt_title_change;
		wxStaticText* lbl_error_title_change;
		wxStaticText* lbl_author_change;
		wxTextCtrl* txt_author_change;
		wxStaticText* lbl_error_author_change;
		wxButton* btn_confirm_change;
		wxToolBar* m_toolBar9;
		wxButton* btn_cancel_change;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void inputItemBarcodeChange( wxKeyEvent& event ) { event.Skip(); }
		virtual void updateTitleAuthor( wxCommandEvent& event ) { event.Skip(); }
		virtual void inputTitleChange( wxCommandEvent& event ) { event.Skip(); }
		virtual void inputAuthorChange( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnConfirmChangeClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancelChangeClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FrameChangeItemStatus( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 641,422 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameChangeItemStatus();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogConfirm
///////////////////////////////////////////////////////////////////////////////
class DialogConfirm : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* lbl_confirm_message;
		wxPanel* m_panel23;
		wxButton* btn_confirm_yes;
		wxButton* btn_confirm_no;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnYesClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnNoClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogConfirm( wxWindow* parent, wxWindowID id = ID_DIALOG_CONFIRM, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 373,134 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogConfirm();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogSaveFile
///////////////////////////////////////////////////////////////////////////////
class DialogSaveFile : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText84;
		wxTextCtrl* txt_file_name;
		wxStaticText* lbl_error_file_name;
		wxButton* btn_save;
		wxButton* btn_cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void exit( wxCloseEvent& event ) { event.Skip(); }
		virtual void btnSaveClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancelClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogSaveFile( wxWindow* parent, wxWindowID id = ID_DIALOG_SAVE_FILE, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 626,267 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogSaveFile();
	
};

#endif //__NONAME_H__
