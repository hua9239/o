#include "Book.h"

Book::Book()
{
}
Book::Book(string name, string type)
{
    this->name = name;
    this->type = type;
}
void Book::setName(string name)
{
    this->name = name;
}
void Book::setType(string type)
{
    this->type = type;
}
string Book::getName()
{
    return this->name;
}
string Book::getType()
{
    return this->type;
}
void Book::print()
{
    cout << name << " " << type << endl;
}