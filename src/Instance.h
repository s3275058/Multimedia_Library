#ifndef INSTANCE_H
#define INSTANCE_H

#include <time.h>
#include <string.h>
#include "Collection.h"

using namespace std;

class Instance
{
    public:

        Instance(int barcode_val, int c_val, int status_val);
		Instance(int barcode_val, int c_val, int status_val, int borrowerId, int borrow_times,int numsDay, struct tm * create_date, struct tm * borrow_date);
		Instance(int barcode_val, int c_val, int status_val, int borrowerId, int borrow_times,int numsDay, struct tm * create_date);
        static int setCurrentBarcode();

        int getBarcode();

        int getCollection();
        void setCollection(int val);

        int getBorrower();
        void setBorrower(int val);

        int getStatus();
        void setStatus(int val);

        int getBorrowTimes();
        void setBorrowTimes(int val);

        int getNumDays();
        void setNumDays(int val);

        struct tm * getCreateDate();

        struct tm * getBorrowDate();
        void setBorrowDate(struct tm * val);

        bool operator==(int val);

    protected:

    private:

        int barcode;
        int c;
        int b;
        int status;
        int borrow_times;
        int num_days;
        struct tm * create_date;
        struct tm * borrow_date = NULL;

};

#endif // INSTANCE_H
