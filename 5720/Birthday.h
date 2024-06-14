#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include <iostream>
using namespace std;

class Birthday
{
private:
    int year, month, day;

public:
    Birthday();
    Birthday(int y, int m, int d);
    void setYear(int y);
    int getYear() const;
    void setMonth(int m);
    int getMonth() const;
    void setDay(int d);
    int getDay() const;
    void print() const;
};

#endif