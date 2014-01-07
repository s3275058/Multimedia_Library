#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/wx.h>
#include <wx/print.h>
#include <wx/richtext/richtextprint.h>
#include "FrameMainApp.h"
//class Library;

Library * l;
class Application : public wxApp
{
    public:

        virtual bool OnInit();
        virtual int OnExit();
        

        

};

#endif // APPLICATION_H
