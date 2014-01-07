#include "Instance.h"

Instance::Instance(int barcode_val, int c_val, int status_val) : barcode(barcode_val), c(c_val),
                                                                    b(-1), status(status_val),
                                                                    borrow_times(0), num_days(0)
{

    time_t now = time(0);
    struct tm * date = localtime(& now);
    create_date = new struct tm;
    memcpy(create_date, date, sizeof(struct tm));
}

Instance::Instance(int barcode_val, int c_val,
                    int status_val, int borrowerId,
                    int borrow_times,int numsDay,
                    struct tm * create_date, struct tm * borrow_date): barcode(barcode_val), c(c_val),
                                                                        b(borrowerId), status(status_val),
                                                                        borrow_times(borrow_times), num_days(numsDay),
                                                                        create_date(create_date), borrow_date(borrow_date) {}

Instance::Instance(int barcode_val, int c_val,
                    int status_val, int borrowerId,
                    int borrow_times, int numsDay,
                    struct tm * create_date): barcode(barcode_val), c(c_val),
                                                b(borrowerId), status(status_val),
                                                borrow_times(borrow_times),
                                                num_days(numsDay), create_date(create_date) {}

int Instance::getBarcode()
{
    return barcode;
}

int Instance::getCollection()
{
    return c;
}

void Instance::setCollection(int val)
{
    c = val;
}

int Instance::getBorrower()
{
    return b;
}

void Instance::setBorrower(int val)
{
    b = val;
}

int Instance::getStatus()
{
    return status;
}

void Instance::setStatus(int val)
{
    status = val;
}

int Instance::getBorrowTimes()
{
    return borrow_times;
}

void Instance::setBorrowTimes(int val)
{
    borrow_times = val;
}

int Instance::getNumDays()
{
    return num_days;
}

void Instance::setNumDays(int val)
{
    num_days = val;
}

struct tm * Instance::getCreateDate()
{
    return create_date;
}

struct tm * Instance::getBorrowDate()
{
    return borrow_date;
}

void Instance::setBorrowDate(struct tm * val)
{
    borrow_date = val;
}

bool Instance::operator==(int val)
{
    return barcode == val;
}
