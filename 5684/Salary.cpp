#include "Salary.h"

Salary::Salary()
{
    name = "";
    money = 0;
    hours = 0;
    workDay = 0;
}

Salary::Salary(string n, int m, int h, int w)
{
    name = n;
    money = m;
    hours = h;
    workDay = w;
}

void Salary::setName(string n)
{
    name = n;
}

void Salary::setMoney(int m)
{
    money = m;
}

void Salary::setHours(int h)
{
    hours = h;
}

void Salary::setworkDay(int w)
{
    workDay = w;
}

string Salary::getName() const
{
    return name;
}

int Salary::getMoney() const
{
    return money;
}

int Salary::getHours() const
{
    return hours;
}

int Salary::getworkDay() const
{
    return workDay;
}

int Salary::getSalary() const
{
    return money * hours * workDay;
}