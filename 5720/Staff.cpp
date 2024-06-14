#include "Staff.h"

Staff::Staff()
{
    name = "";
    br = Birthday();
    sa = Salary();
}

Staff::Staff(string n, Birthday b, Salary s)
{
    name = n;
    br = b;
    sa = s;
}

void Staff::setName(string n)
{
    name = n;
}

string Staff::getName() const
{
    return name;
}

void Staff::setBr(Birthday b)
{
    br = b;
}

Birthday Staff::getBr() const
{
    return br;
}

void Staff::setSa(Salary s)
{
    sa = s;
}

Salary Staff::getSa() const
{
    return sa;
}

void Staff::print() const
{
    cout << name << " ";
    br.print();
    cout << " ";
    sa.print();
}