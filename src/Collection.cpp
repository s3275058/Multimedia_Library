#include "Collection.h"

Collection::Collection(int id_val, int ct_val,
                       int dt_val, string title_val,
                       string author_val, string version_val,
                       string publisher_val, int year_val,
                       int duration_val, int category_val) : id(id_val), ct(ct_val),
                                                                dt(dt_val), title(title_val),
                                                                author(author_val), version(version_val),
                                                                publisher(publisher_val), year(year_val),
                                                                duration(duration_val), category(category_val) {}

int Collection::getID()
{
    return id;
}

int Collection::getCollectionType()
{
    return ct;
}

void Collection::setCollectionType(int val)
{
    ct = val;
}

int Collection::getDataType()
{
    return dt;
}

void Collection::setDataType(int val)
{
    dt = val;
}

string Collection::getTitle()
{
    return title;
}

void Collection::setTitle(string val)
{
    title = val;
}

string Collection::getAuthor()
{
    return author;
}

void Collection::setAuthor(string val)
{
    author = val;
}

string Collection::getVersion()
{
    return version;
}

void Collection::setVerion(string val)
{
    version = val;
}

string Collection::getPublisher()
{
    return publisher;
}

void Collection::setPublisher(string val)
{
    publisher = val;
}

int Collection::getYear()
{
    return year;
}

void Collection::setYear(int val)
{
    year = val;
}

int Collection::getDuration()
{
    return duration;
}

void Collection::setDuration(int val)
{
    duration = val;
}

int Collection::getCategory()
{
    return category;
}

void Collection::setCategory(int val)
{
    category = val;
}

bool Collection::operator==(int val)
{
    return id == val;
}
