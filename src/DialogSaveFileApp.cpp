#include "DialogSaveFileApp.h"

DialogSaveFileApp::DialogSaveFileApp(wxFrame * parent, Library * l_val,
                                     deque<Collection *> * collections_val,
                                     deque<Instance *> * instances_val,
                                     deque<struct tm *> * deadlines_val) : DialogSaveFile(parent), l(l_val),
                                                                            collections(collections_val),
                                                                            instances(instances_val),
                                                                            deadlines(deadlines_val) {}

void DialogSaveFileApp::exit(wxCloseEvent& event)
{
    Destroy();
}

void DialogSaveFileApp::btnSaveClicked(wxCommandEvent & event)
{
    string input_file_name = txt_file_name->GetValue().ToStdString();
    showError(strcmp(input_file_name.c_str(), "") != 0, lbl_error_file_name, "Please enter the file name!");
    if (strcmp(input_file_name.c_str(), "") != 0)
    {
        string file_name = "./reports/";
        file_name.append(input_file_name);
        file_name.append(".csv");
        ofstream file(file_name);

        if (collections != NULL)
        {
            file << "ID,title,Author,Category,Collection Type,Data Type,Version,Publisher,Year,Duration,Number of Instances" << endl;
            for (unsigned int i = 0; i < collections->size(); ++i)
            {
                Collection * c = collections->at(i);
                file << c->getID() << ",";
                file << c->getTitle() << ",";
                file << c->getAuthor() << ",";
                file << categories[c->getCategory() - 1] << ",";
                file << collection_types[c->getCollectionType() - 1] << ",";
                file << data_types[c->getDataType() -1] << ",";
                file << c->getVersion() << ",";
                file << c->getPublisher() << ",";
                file << c->getYear() << ",";
                file << c->getDuration() << ",";
                int count = 0;
                for (unsigned int j = 0; j < l->instances->size(); ++j)
                {
                    if (* c == l->instances->at(j)->getCollection())
                    {
                        ++count;
                    }
                }
                file << count<< endl;
            }
        }

        else if (deadlines != NULL)
        {
            file << "Borrower ID,Item Barcode,Borrower Name,Mobile Number,Deadline" << endl;
            for (unsigned int i = 0; i < instances->size(); ++i)
            {
                Instance * in = instances->at(i);
                Borrower * b;
                for (unsigned int j = 0; j < l->borrowers->size(); ++j)
                {
                    b = l->borrowers->at(j);
                    if (* b == in->getBorrower())
                    {
                        break;
                    }
                }
                file << b->getID() << ",";
                file << in->getBarcode() << ",";
                file << b->getName() << ",";
                file << b->getMobileNumber() << ",";
                char deadline_string[15];
                strftime(deadline_string, 15, "%d/%m/%Y", deadlines->at(i));
                file << deadline_string << endl;
            }
        }

        else if (instances != NULL)
        {
            file << "Barcode,Collection ID,Status,Borrow Times,Borrow Days,Creation Date,Borrower ID,Borrowing Date" << endl;
            for (unsigned int i = 0; i < instances->size(); ++i)
            {
                Instance * in = instances->at(i);
                file << in->getBarcode() << ",";
                file << in->getCollection() << ",";
                file << statuses[in->getStatus() - 1] << ",";
                file << in->getBorrowTimes() << ",";
                file << in->getNumDays() << ",";
                char create_date[15];
                strftime(create_date, 15, "%d/%m/%Y", in->getCreateDate());
                file << create_date << ",";

                if (in->getBorrower() != -1)
                {
                    Borrower * b;
                    for (unsigned int j = 0; j < l->borrowers->size(); ++j)
                    {
                        b = l->borrowers->at(j);
                        if (* b == in->getBorrower())
                        {
                            break;
                        }
                    }
                    file << b->getID() << ",";
                    char borrow_date[15];
                    strftime(borrow_date, 15, "%d/%m/%Y", in->getBorrowDate());
                    file << borrow_date << endl;
                }

                else
                {
                    file << "," << endl;
                }
            }
        }

        else
        {
            file << "ID,Name,Type,Department,Mobile Number,Items Borrowing,Items Borrowed,Items Late" << endl;
            for (unsigned int i = 0; i < l->borrowers->size(); ++i)
            {
                Borrower * b = l->borrowers->at(i);
                file << b->getID() << ",";
                file << b->getName() << ",";
                file << borrower_types[b->getType() - 1] << ",";
                file << departments[b->getDepartment() - 1] << ",";
                file << b->getMobileNumber() << ",";
                int count = 0;
                for (unsigned int j = 0; j < l->instances->size(); ++j)
                {
                    if (* b == l->instances->at(j)->getBorrower())
                    {
                        ++count;
                    }
                }
                file << count << ",";
                file << b->getNumItemsBorrowed() << ",";
                file << b->getNumItemsLate() << endl;
            }
        }

        file.close();
        Destroy();
    }
}

void DialogSaveFileApp::btnCancelClicked(wxCommandEvent & event)
{
    Destroy();
}
