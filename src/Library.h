#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <sstream>
#include <deque>
#include <ctype.h>
#include <iostream>
#include "../include/sqlite3.h"
#include "Utility.h"
#include "Instance.h"
#include "Borrower.h"


using namespace std;

class Library
{
public:

    deque<Collection *> * collections = NULL;
    deque<Instance *> * instances = NULL;
    deque<Borrower *> * borrowers = NULL;
    deque<int> years_from_1990;

    Library();
    ~Library();

    void initialise();

    Collection * addCollection(int ct_val, int dt_val, string title_val,
                               string author_val, string version_val,
                               string publisher_val,int year_val,
                               int duration_val, int category_val);
    void editCollection(Collection * c, int ct_val, int dt_val, string title_val,
                        string author_val, string version_val,
                        string publisher_val, int year_val,
                        int duration_val, int category_val);
    bool deleteCollection(int id);
    int findNumberOfInstances(Collection * c);

    void addInstance(int c_val, int status_val);
    void editInstance(Instance * i, int b_val,
                      int status_val, int borrow_times_val,
                      int num_days_val, struct tm * borrow_date_val);
    bool deleteInstance(int barcode);

    void addBorrower(string name_val, int type_val,
                     int department_val, string mobile_number_val);
    void editBorrower(Borrower * b, string name_val, int type_val,
                      int department_val, string mobile_number_val,
                      int num_items_borrowed_val, int num_items_late_val);
    bool deleteBorrower(int id);
    int findNumberOfItemsBorrowing(Borrower * b);

    void getAllFromDatabase();
    void getBorrowersFromDatabase();
    void getInstancesFromDatabase();
    void getCollectionsFromDatabase();
    static int callback(void *NotUsed, int argc, char **argv, char **szColName);

    void uploadBorrower(Borrower * b);
    void uploadInstance(Instance * i);
    void uploadCollection(Collection * c);

    void updateBorrowerFromDataBase(Borrower * b);
    void updateInstanceFromDataBase(Instance * i);
    void updateCollectionFromDataBase(Collection * c);

    void deleteBorrowerFromDatabase(int id);
    void deleteInstanceFromDatabase(int barcode);
    void deleteCollectionFromDatabase(int id);

    void stringToDate(string text, struct tm * date);

    template <class T>
    int getLastestId(T* deque);
    int getLastestBarcode();

private:
    //sqlite elements

    sqlite3 *db;
    char *szErrMsg;
    int rc;
    const char *sql;
    sqlite3_stmt *stmt;

};

#endif // LIBRARY_H
