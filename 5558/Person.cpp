#include "Person.h"

Person::Person()
{
    name = "NULL";
    type = "NULL";
}
Person::Person(string n, string t)
{
    name = n;
    type = t;
}
string Person::getName() const
{
    return name;
}
string Person::getType() const
{
    return type;
}
void Person::print() const
{
    cout << name << " " << type << endl;
}