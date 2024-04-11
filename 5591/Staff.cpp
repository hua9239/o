#include "Staff.h"

int Staff::time = 0;

Staff::Staff()
{
    name = "";
    time++;
}

Staff::Staff(string n, Birthday b, Salary s)
{
    name = n;
    br = b;
    sa = s;
    time++;
}

void Staff::setName(string n)
{
    name = n;
}

string Staff::getName() const
{
    return name;
}

Birthday *Staff::setBr()
{
    return &br;
}

Birthday Staff::getBr() const
{
    return br;
}

Salary *Staff::setSa()
{
    return &sa;
}

Salary Staff::getSa() const
{
    return sa;
}

int Staff::getTime()
{
    return time;
}

string Staff::print() const
{
    return name + " " + br.print() + " " + to_string(sa.getMonthlySalary());
}