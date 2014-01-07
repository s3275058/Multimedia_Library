#include "Application.h"

IMPLEMENT_APP(Application)

bool Application::OnInit()
{	
    l = new Library();
	FrameMainApp * fma = new FrameMainApp(NULL, l);
    
    SetTopWindow(fma);
    fma->Show(true);
	
	//string label ="title";
	//const wxString message(label);
	//wxRichTextPrinting * po = new 	wxRichTextPrinting(message,NULL);
	//wxRichTextPrintout  * po = new wxRichTextPrintout(message);
	//wxPrinter * printer = new wxPrinter();
	//printer->Print(NULL,po,true);
	
    return true;
}

int Application::OnExit()
{
	delete l;
    return 0;
}
