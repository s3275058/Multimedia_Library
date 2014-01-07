#ifndef CUSTOMPRINTOUR_H
#define CUSTOMPRINTOUR_H

#include <fstream>
#include "Library.h"
#include "noname.h"
#include "Functions.h"
#include <iostream>
#include <wx/wx.h>
#include <wx/print.h>
#include <wx/printdlg.h>
#include <cmath>


/**
  * Shows a basic example of how to print stuff in wx.
  */
class CustomPrintout : public wxPrintout
{
	Library * l = NULL;

    deque<Collection *> * collections = NULL;
    deque<Instance *> * instances = NULL;
    deque<struct tm *> * deadlines = NULL;

protected:

    wxPageSetupDialogData m_page_setup;

    /** the type of paper (letter, A4, etc...) */
    wxPaperSize m_paper_type;

    /** horizontal or vertical */
    int m_orient;

    // Or, if you use wxWidgets 2.9+ :
    // wxPrintOrientation m_orient;

    /** number of pages we want to print. here it's static, but in a real example you will often
      * want to calculate dynamically once you know the size of the printable area from page setup
      */
    int m_page_amount;

    /** margins, in millimeters */
    int m_margin_left, m_margin_right, m_margin_top, m_margin_bottom;

    /** we'll use this to determine the coordinate system; it describes the number of units per
      * centimeter (i.e. how fine the coordinate system is)
      */
    float m_units_per_cm;

    /** will contain the dimensions of the coordinate system, once it's calculated.
      * in the printing callback, you can then draw from (0, 0) to (m_coord_system_width, m_coord_system_height),
      * which will be the area covering the paper minus the margins
      */
    int m_coord_system_width, m_coord_system_height;

public:
    CustomPrintout(wxString title, float units_per_cm,Library * l_val,
                          deque<Collection *> * collections_val,
                          deque<Instance *> * instances_val,
                          deque<struct tm *> * deadlines_val);
    bool performPageSetup(const bool showPageSetupDialog);
    void OnBeginPrinting();
    wxPrintData getPrintData();
    bool OnBeginDocument(int startPage, int endPage);
    void GetPageInfo(int *minPage, int *maxPage, int *pageSelFrom, int *pageSelTo);
    bool HasPage(int pageNum);
    bool OnPrintPage(int pageNum);
	void OnEndPrinting();

	wxString  drawReport();
};
#endif

