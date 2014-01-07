#ifndef BORROWER_H
#define BORROWER_H

#include <string>

using namespace std;

class Borrower
{
    public:

        Borrower(int id_val, string name_val, int type_val, int department_val, string mobile_number_val);

        static int getCurrentID();
        static void setCurrentID(int val);

        int getID();

        string getName();
        void setName(string val);

        int getType();
        void setType(int val);

        int getDepartment();
        void setDepartment(int val);

        string getMobileNumber();
        void setMobileNumber(string val);

        int getNumItemsBorrowed();
        void setNumItemsBorrowed(int val);

        int getNumItemsLate();
        void setNumItemsLate(int val);

        bool operator==(int val);

    protected:

    private:

        int id;
        string name;
        int type;
        int department;
        string mobile_number;
        int num_items_borrowed;
        int num_items_late;

};

#endif // BORROWER_H
