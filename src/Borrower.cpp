#include "Borrower.h"

Borrower::Borrower(int id_val, string name_val, int type_val,
                   int department_val, string mobile_number_val) : id(id_val), name(name_val),
                                                                    type(type_val), department(department_val),
                                                                    mobile_number(mobile_number_val),
                                                                    num_items_borrowed(0), num_items_late(0) {}

int Borrower::getID()
{
    return id;
}

string Borrower::getName()
{
    return name;
}

void Borrower::setName(string val)
{
    name = val;
}

int Borrower::getType()
{
    return type;
}

void Borrower::setType(int val)
{
    type = val;
}

int Borrower::getDepartment()
{
    return department;
}

void Borrower::setDepartment(int val)
{
    department = val;
}

string Borrower::getMobileNumber()
{
    return mobile_number;
}

void Borrower::setMobileNumber(string val)
{
    mobile_number = val;
}

int Borrower::getNumItemsBorrowed()
{
    return num_items_borrowed;
}

void Borrower::setNumItemsBorrowed(int val)
{
    num_items_borrowed = val;
}

int Borrower::getNumItemsLate()
{
    return num_items_late;
}

void Borrower::setNumItemsLate(int val)
{
    num_items_late = val;
}

bool Borrower::operator==(int val)
{
    return id == val;
}
