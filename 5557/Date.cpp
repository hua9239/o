#include "Date.h"

Date::Date()
{
    month = 1;
    day = 1;
    year = 2000;
}
Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}
void Date::setMonth(int m)
{
    month = m;
}
void Date::setDay(int d)
{
    day = d;
}
void Date::setYear(int y)
{
    year = y;
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}
int Date::getYear() const
{
    return year;
}
void Date::print()
{
    cout << month << "/" << day << "/" << year;
}