#include "Book.h"

Book::Book()
{
    name = "NULL";
    type = "NULL";
    serial_number = "NULL";
    price = 0;
}
Book::Book(string n, string t, string s, double p)
{
    name = n;
    type = t;
    serial_number = s;
    price = p;
}
string Book::getType() const
{
    return type;
}
double Book::getPrice() const
{
    return price;
}
void Book::print() const
{
    cout << name << " " << type << " " << serial_number << " " << price << endl;
}