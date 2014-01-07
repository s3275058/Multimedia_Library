#ifndef DIALOGSAVEFILEAPP_H
#define DIALOGSAVEFILEAPP_H

#include <fstream>
#include "Library.h"
#include "noname.h"
#include "Functions.h"

class DialogSaveFileApp : public DialogSaveFile
{
    public:

        DialogSaveFileApp(wxFrame * parent, Library * l_val,
                          deque<Collection *> * collections_val,
                          deque<Instance *> * instances_val,
                          deque<struct tm *> * deadlines_val);

        void exit(wxCloseEvent & event);

        void btnSaveClicked(wxCommandEvent & event);
        void btnCancelClicked(wxCommandEvent & event);

    protected:

    private:

        Library * l = NULL;

        deque<Collection *> * collections = NULL;
        deque<Instance *> * instances = NULL;
        deque<struct tm *> * deadlines = NULL;

};

#endif // DIALOGSAVEFILEAPP_H
