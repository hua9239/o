#include "Birthday.h"

Birthday::Birthday()
{
    year = 0;
    month = 0;
    day = 0;
}

Birthday::Birthday(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

void Birthday::setYear(int y)
{
    year = y;
}

int Birthday::getYear() const
{
    return year;
}

void Birthday::setMonth(int m)
{
    month = m;
}

int Birthday::getMonth() const
{
    return month;
}

void Birthday::setDay(int d)
{
    day = d;
}

int Birthday::getDay() const
{
    return day;
}

void Birthday::print() const
{
    cout << year << "/" << month << "/" << day;
}