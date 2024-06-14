#include "Salary.h"

Salary::Salary()
{
    hours = 0;
    workDay = 0;
}

Salary::Salary(int h, int w)
{
    hours = h;
    workDay = w;
}

void Salary::setHours(int h)
{
    hours = h;
}

int Salary::getHours() const
{
    return hours;
}

void Salary::setWorkDay(int w)
{
    workDay = w;
}

int Salary::getWorkDay() const
{
    return workDay;
}

int Salary::getMonthlySalary() const
{
    return 168 * hours * workDay;
}

void Salary::print() const
{
    cout << getMonthlySalary();
}