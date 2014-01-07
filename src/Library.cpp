#include "Library.h"

Library::Library()
{
    initialise();
}

Library::~Library()
{
    if(db)
    {
        sqlite3_close(db);
    }
    for(unsigned int i=0; i< collections->size(); ++i)
    {
        delete collections->at(i);
    }
    for(unsigned int i=0; i< instances->size(); ++i)
    {
        delete instances->at(i);
    }
    for(unsigned int i=0; i< borrowers->size(); ++i)
    {
        delete borrowers->at(i);
    }
    collections->clear();
    instances->clear();
    borrowers->clear();
    delete  collections;
    delete  instances;
    delete  borrowers;
}

void Library::initialise()
{
    collections = new deque<Collection *>();
    instances = new deque<Instance *>();
    borrowers = new deque<Borrower *>();

    time_t now = time(0);
    struct tm * date = localtime(& now);
    for(int i = date->tm_year + 1900; i > 1989; --i)
    {
        years_from_1990.push_back(i);
    }

    szErrMsg = 0;


    // open database
    int rc = sqlite3_open("ass.db", &db);

    if(rc)
    {
        std::cout << "Can't open database\n";
    }
    else
    {
        std::cout << "Open database successfully\n";
    }

    getAllFromDatabase();
}


Collection * Library::addCollection(int ct_val, int dt_val, string title_val,
                                    string author_val, string version_val,
                                    string publisher_val, int year_val,
                                    int duration_val, int category_val)
{
    Collection * c = new Collection(getLastestId(collections), ct_val,
                                    dt_val, title_val, author_val,
                                    version_val, publisher_val, year_val,
                                    duration_val, category_val);
    collections->push_back(c);
    uploadCollection(c);
    return c;
}

void Library::editCollection(Collection * c, int ct_val, int dt_val,
                             string title_val, string author_val,
                             string version_val, string publisher_val,
                             int year_val, int duration_val, int category_val)
{
    c->setCollectionType(ct_val);
    c->setDataType(dt_val);
    c->setTitle(title_val);
    c->setAuthor(author_val);
    c->setVerion(version_val);
    c->setPublisher(publisher_val);
    c->setYear(year_val);
    c->setDuration(duration_val);
    c->setCategory(category_val);

    updateCollectionFromDataBase(c);
}

bool Library::deleteCollection(int id)
{
    deque<Instance *> temp;

    for (unsigned int i = 0; i < instances->size(); ++i)
    {
        Instance * in = instances->at(i);
        if (in->getCollection() == id)
        {
            if (in->getStatus() == 1)
            {
                for (unsigned int j = 0; j < temp.size(); ++j)
                {
                    instances->push_back(temp[j]);
                }
                return false;
            }
            else
            {
                temp.push_back(in);
                //instances->erase(instances->begin() + i);
                deleteInstance(in->getBarcode());
                --i;
            }
        }
    }

    for (unsigned int i = 0; i < collections->size(); ++i)
    {
        if (* collections->at(i) == id)
        {
            collections->erase(collections->begin() + i);
            break;
        }
    }
    deleteCollectionFromDatabase(id);
    return true;
}

int Library::findNumberOfInstances(Collection * c)
{
    int instances_num = 0;
    for (unsigned int i = 0; i < instances->size(); ++i)
    {
        if (* c == instances->at(i)->getCollection())
        {
            ++instances_num;
        }
    }
    return instances_num;
}

void Library::addInstance(int c_val, int status_val)
{
    Instance * i = new Instance(getLastestBarcode(), c_val, status_val);
    instances->push_back(i);
    uploadInstance(i);
}

void Library::editInstance(Instance * i, int b_val,
                           int status_val,int borrow_times_val,
                           int num_days_val, struct tm * borrow_date_val)
{
    i->setBorrower(b_val);
    i->setStatus(status_val);
    i->setBorrowTimes(borrow_times_val);
    i->setNumDays(num_days_val);
    i->setBorrowDate(borrow_date_val);
    updateInstanceFromDataBase(i);
}

bool Library::deleteInstance(int barcode)
{
    for (unsigned int i = 0; i < instances->size(); ++i)
    {
        Instance * in = instances->at(i);
        if (* in == barcode)
        {
            if (in->getStatus() == 1)
            {
                return false;
            }
            else
            {
                instances->erase(instances->begin() + i);
                break;
            }
        }
    }
    deleteInstanceFromDatabase(barcode);
    return true;
}

void Library::addBorrower(string name_val, int type_val,
                          int department_val, string mobile_number_val)
{
    Borrower * b = new Borrower(getLastestId(borrowers), name_val, type_val,
                                department_val, mobile_number_val);
    borrowers->push_back(b);
    uploadBorrower(b);
}

void Library::editBorrower(Borrower * b, string name_val, int type_val,
                           int department_val, string mobile_number_val,
                           int num_items_borrowed_val, int num_items_late_val)
{
    b->setName(name_val);
    b->setType(type_val);
    b->setDepartment(department_val);
    b->setMobileNumber(mobile_number_val);
    b->setNumItemsBorrowed(num_items_borrowed_val);
    b->setNumItemsLate(num_items_late_val);
    updateBorrowerFromDataBase(b);
}


bool Library::deleteBorrower(int id)
{
    for (unsigned int i = 0; i < borrowers->size(); ++i)
    {
        Borrower * b = borrowers->at(i);
        if (* b == id)
        {
            for (unsigned int j = 0; j < instances->size(); ++j)
            {
                if (* b == instances->at(j)->getBorrower())
                {
                    return false;
                }
            }

            borrowers->erase(borrowers->begin() + i);
            break;
        }
    }
    deleteBorrowerFromDatabase(id);
    return true;
}

int Library::findNumberOfItemsBorrowing(Borrower * b)
{
    int count = 0;
    for (unsigned int i = 0; i < instances->size(); ++i)
    {
        if (* b == instances->at(i)->getBorrower())
        {
            ++count;
        }
    }
    return count;
}

void Library::getAllFromDatabase()
{
    getBorrowersFromDatabase();
    getInstancesFromDatabase();
    getCollectionsFromDatabase();
}

void Library::getBorrowersFromDatabase()
{
    sql= "SELECT * FROM borrower";
    /* prepare the sql, leave stmt ready for loop */
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if (rc != SQLITE_OK)
    {
        cout << "Failed to prepare database\n" ;
        sqlite3_close(db) ;
        return;
    }

    cout << "Loading Borrowers...";

    do
    {
        rc = sqlite3_step (stmt) ;
        if (rc == SQLITE_ROW)
        {

            int id = sqlite3_column_int(stmt, 0);
            string name = (char *)sqlite3_column_text(stmt, 1);
            int type = sqlite3_column_int(stmt, 2);
            int department = sqlite3_column_int(stmt, 3);
            string phone = (char *)sqlite3_column_text(stmt, 4);
            borrowers->push_back(new Borrower(id,name,type,department,phone));
        }
    }
    while (rc == SQLITE_ROW) ;

//    cout<< borrowers->size() ;
    cout << "Done\n" ;
}

void Library::getInstancesFromDatabase()
{
    sql = "SELECT * FROM instance";

    //prepare the sql, leave stmt ready for loop
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if (rc != SQLITE_OK)
    {
        cout << "Failed to prepare database\n" ;
        sqlite3_close(db) ;
        sqlite3_free(szErrMsg);
        return;
    }
    cout << "Loading Instances...." ;
    do
    {
        rc = sqlite3_step (stmt) ;
        if (rc == SQLITE_ROW)
        {
            /* can read data */
            int barcode = sqlite3_column_int(stmt, 0);
            int c_val = sqlite3_column_int(stmt, 1);
            int status_val = sqlite3_column_int(stmt,2);
            int borrower_id = sqlite3_column_int(stmt, 3);
            int borrow_times = sqlite3_column_int(stmt, 4);
            int numsDay = sqlite3_column_int(stmt, 5);

            struct tm * createdDate = new struct tm;
            struct tm * borrowDate = new struct tm;
            stringToDate((char *)sqlite3_column_text(stmt, 6), createdDate);
            if (sqlite3_column_type(stmt, 7) != SQLITE_NULL)
            {       
                stringToDate((char *)sqlite3_column_text(stmt, 7), borrowDate);
                Instance * i = new Instance(barcode, c_val, status_val, borrower_id, borrow_times, numsDay, createdDate, borrowDate);
                instances->push_back(i);
            }
            else
            {
                instances->push_back(new Instance(barcode, c_val, status_val, borrower_id, borrow_times, numsDay, createdDate));
            }
        }
    }
    while (rc == SQLITE_ROW) ;
    cout << "Done\n\r" ;
}

void Library::getCollectionsFromDatabase()
{
    sql= "SELECT * FROM collection";

    //prepare the sql, leave stmt ready for loop
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if (rc != SQLITE_OK)
    {
        cout << "Failed to prepare database\n" ;
        sqlite3_close(db) ;
        sqlite3_free(szErrMsg);
        return;
    }
    cout << "Loading Collections...." ;
    do
    {
        rc = sqlite3_step (stmt) ;
        if (rc == SQLITE_ROW)
        {
            /* can read data */
            int id = sqlite3_column_int(stmt, 0);
            int coltype = sqlite3_column_int(stmt, 1);
            int datatype = sqlite3_column_int(stmt, 2);
            string title = (char *)sqlite3_column_text(stmt, 3);
            string author = (char *)sqlite3_column_text(stmt, 4);
            string version = (char *)sqlite3_column_text(stmt, 5);
            string publisher = (char *)sqlite3_column_text(stmt, 6);
            int year = sqlite3_column_int(stmt, 7);
            int duration = sqlite3_column_int(stmt, 8);
            int category = sqlite3_column_int(stmt, 9);
            collections->push_back(new Collection(id,coltype,datatype,title,author,version,publisher,year,duration,category));

        }
    }
    while (rc == SQLITE_ROW) ;
    cout << "Done\n\r" ;
}

void Library::uploadBorrower(Borrower * b)
{

    //updload to database
    sql = "INSERT INTO borrower (id,name,type,department,phone,numsBorrow,numsLate) VALUES (?,?,?,?,?,?,?)";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Borrower SQL fail\n";
    }
    else
    {
        // bind the value
        sqlite3_bind_int(stmt, 1, b->getID());
        sqlite3_bind_text(stmt, 2, b->getName().c_str(),  strlen(b->getName().c_str()),0);
        sqlite3_bind_int(stmt, 3, b->getType());
        sqlite3_bind_int(stmt, 4, b->getDepartment());
        sqlite3_bind_text(stmt, 5, b->getMobileNumber().c_str(), strlen(b->getMobileNumber().c_str()), 0);
        sqlite3_bind_int(stmt, 6, b->getNumItemsBorrowed());
        sqlite3_bind_int(stmt, 7, b->getNumItemsLate());

        // commit
        sqlite3_step(stmt);

        sqlite3_finalize(stmt);
        cout<<"Add new Borrower\n";
    }
}

void Library::uploadInstance(Instance * i)
{
    //updload to database
    sql = "INSERT INTO instance(barcode,collectionId,status,borrowerId,borrowTime,numsDay,createdDate,borrowDate) VALUES (?,?,?,?,?,?,?,?)";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Instances SQL fail\n";
    }
    else
    {
        // bind the value
        sqlite3_bind_int(stmt, 1, i->getBarcode());
        sqlite3_bind_int(stmt, 2, i->getCollection());
        sqlite3_bind_int(stmt, 3, i->getStatus());
        sqlite3_bind_int(stmt, 4, i->getBorrower());
        sqlite3_bind_int(stmt, 5, i->getBorrowTimes());
        sqlite3_bind_int(stmt, 6, i->getNumDays());
        char crDate[15];
        strftime(crDate, 15, "%d/%m/%Y", i->getCreateDate());
        sqlite3_bind_text(stmt, 7, crDate, strlen(crDate), 0);
        if(i->getBorrowDate()!=NULL)
        {
            char brDate[15];
            strftime(brDate, 15, "%d/%m/%Y", i->getBorrowDate());
            sqlite3_bind_text(stmt, 8, brDate, strlen(brDate), 0);
        }
        //sqlite3_bind_text(stmt, 7, crDate.c_str(), strlen(crDate.c_str()), 0);

        // commit
        sqlite3_step(stmt);
        sqlite3_finalize(stmt);
        cout<<"Add new Instances\n";
    }
}

void Library::uploadCollection(Collection * c)
{
    sql = "INSERT INTO collection (id,coltype,datatype,title,author,version,publisher,year,duration,category) VALUES (?,?,?,?,?,?,?,?,?,?)";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Collection SQL fail\n";
    }
    else
    {
        // bind the value
        sqlite3_bind_int(stmt, 1, c->getID());
        sqlite3_bind_int(stmt, 2, c->getCollectionType());
        sqlite3_bind_int(stmt, 3, c->getDataType());
        sqlite3_bind_text(stmt, 4, c->getTitle().c_str(), strlen(c->getTitle().c_str()), 0);
        sqlite3_bind_text(stmt, 5, c->getAuthor().c_str(), strlen(c->getAuthor().c_str()), 0);
        sqlite3_bind_text(stmt, 6, c->getVersion().c_str(), strlen(c->getVersion().c_str()), 0);
        sqlite3_bind_text(stmt, 7, c->getPublisher().c_str(), strlen(c->getPublisher().c_str()), 0);

        sqlite3_bind_int(stmt, 8, c->getYear());
        sqlite3_bind_int(stmt, 9, c->getDuration());

        sqlite3_bind_int(stmt, 10, c->getCategory());

        // commit
        sqlite3_step(stmt);

        sqlite3_finalize(stmt);
        cout<<"Add new Collection\n";
    }
}

void Library::deleteBorrowerFromDatabase(int id)
{
    sql = "DELETE FROM borrower WHERE id =?";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Collection SQL fail\n";
    }
    else
    {
        sqlite3_bind_int(stmt, 1, id);
        sqlite3_step(stmt);
        sqlite3_finalize(stmt);
        cout<<"Delete borrower Id: "<<id<<"\n";
    }
}

void Library::deleteInstanceFromDatabase(int barcode)
{
    sql = "DELETE FROM instance WHERE barcode =?";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Collection SQL fail\n";
    }
    else
    {
        sqlite3_bind_int(stmt, 1, barcode);
        sqlite3_step(stmt);
        sqlite3_finalize(stmt);
        cout<<"Delete instance Barcode: "<<barcode<<"\n";
    }
}
void Library::deleteCollectionFromDatabase(int id)
{
    sql = "DELETE FROM collection WHERE id =?";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Collection SQL fail\n";
    }
    else
    {
        sqlite3_bind_int(stmt, 1, id);
        sqlite3_step(stmt);
        sqlite3_finalize(stmt);
        cout<<"Delete collection Id: "<<id<<"\n";
    }
}

void Library::updateBorrowerFromDataBase(Borrower * b)
{
    sql="UPDATE borrower "
        "SET name=?,type=?,department=?,phone=?,numsBorrow=?,numsLate=? "
        "WHERE id=?";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Collection SQL fail\n";
    }
    else
    {
        sqlite3_bind_int(stmt, 7, b->getID());
        sqlite3_bind_text(stmt, 1, b->getName().c_str(),  strlen(b->getName().c_str()),0);
        sqlite3_bind_int(stmt, 2, b->getType());
        sqlite3_bind_int(stmt, 3, b->getDepartment());
        sqlite3_bind_text(stmt, 4, b->getMobileNumber().c_str(), strlen(b->getMobileNumber().c_str()), 0);
        sqlite3_bind_int(stmt, 5, b->getNumItemsBorrowed());
        sqlite3_bind_int(stmt, 6, b->getNumItemsLate());

        sqlite3_step(stmt);
        sqlite3_finalize(stmt);
        cout<<"Update borrower Id: "<< b->getID()<<"\n";
    }
}
void Library::updateInstanceFromDataBase(Instance * i)
{
    sql =  "UPDATE instance "
           "SET collectionId=?,status=?,borrowerId=?,"
           "borrowTime=?,numsDay=?,borrowDate=? "
           "WHERE barcode=?";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Instances SQL fail\n";
    }
    else
    {
        // bind the value
        sqlite3_bind_int(stmt, 7, i->getBarcode());
        sqlite3_bind_int(stmt, 1, i->getCollection());
        sqlite3_bind_int(stmt, 2, i->getStatus());
        sqlite3_bind_int(stmt, 3, i->getBorrower());
        sqlite3_bind_int(stmt, 4, i->getBorrowTimes());
        sqlite3_bind_int(stmt, 5, i->getNumDays());
        if(i->getBorrowDate()!=NULL)
        {
		    char brDate[15];
		    strftime(brDate, 15, "%d/%m/%Y", i->getBorrowDate());
		    sqlite3_bind_text(stmt, 6, brDate, strlen(brDate), 0);
        }
        // commit
        sqlite3_step(stmt);
        sqlite3_finalize(stmt);
        cout<<"Update instances Barcode: "<<i->getBarcode()<<"\n";
    }


}
void Library::updateCollectionFromDataBase(Collection * c)
{
    sql = "UPDATE collection "
          "SET coltype=?,datatype=?,title=?,author=?,"
          "version=?,publisher=?,year=?,duration=?,category=? "
          "WHERE id=?";
    rc = sqlite3_prepare_v2(db, sql, strlen(sql)+1, &stmt, NULL) ;
    if( rc != SQLITE_OK )
    {
        cout << "Add Collection SQL fail\n";
    }
    else
    {
        // bind the value
        sqlite3_bind_int(stmt, 10, c->getID());
        sqlite3_bind_int(stmt, 1, c->getCollectionType());
        sqlite3_bind_int(stmt, 2, c->getDataType());
        sqlite3_bind_text(stmt, 3, c->getTitle().c_str(), strlen(c->getTitle().c_str()), 0);
        sqlite3_bind_text(stmt, 4, c->getAuthor().c_str(), strlen(c->getAuthor().c_str()), 0);
        sqlite3_bind_text(stmt, 5, c->getVersion().c_str(), strlen(c->getVersion().c_str()), 0);
        sqlite3_bind_text(stmt, 6, c->getPublisher().c_str(), strlen(c->getPublisher().c_str()), 0);

        sqlite3_bind_int(stmt, 7, c->getYear());

        sqlite3_bind_int(stmt, 8, c->getDuration());

        sqlite3_bind_int(stmt, 9, c->getCategory());

        // commit
        sqlite3_step(stmt);

        sqlite3_finalize(stmt);
        cout<<"UPDATE collection Id: "<<c->getID()<<"\n";
    }
}

void Library::stringToDate(string text, struct tm * date)
{
    istringstream iss(text);
    string temp;
    deque<string> d;
    while (getline(iss, temp, '/'))
    {
        d.push_back(temp);
    }
    istringstream day(d[0]);
    day >> date->tm_mday;
    istringstream month(d[1]);
    int mon;
    month >> mon;
    date->tm_mon = mon - 1;
    istringstream year(d[2]);
    int y;
    year >> y;
    date->tm_year = y - 1900;
}

template <class T>
int Library::getLastestId(T* deque)
{
    int max=0;
    for (unsigned int i = 0; i < deque->size(); ++i)
    {
        if(deque->at(i)->getID() )
        {
            max = deque->at(i)->getID();
        }
    }

    return max+1;
};

int Library::getLastestBarcode()
{
    int max=0;
    for (unsigned int i = 0; i < instances->size(); ++i)
    {
        if(instances->at(i)->getBarcode() )
        {
            max = instances->at(i)->getBarcode();
        }
    }

    return max+1;
}
