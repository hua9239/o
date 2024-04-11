#ifndef STAFF_H
#define STAFF_H

#include <string>
#include "Birthday.h"
#include "Salary.h"
using namespace std;

class Staff
{
private:
    string name;
    Birthday br;
    Salary sa;
    static int time;

public:
    Staff();
    Staff(string n, Birthday b, Salary s);
    void setName(string n);
    string getName() const;
    Birthday *setBr();
    Birthday getBr() const;
    Salary *setSa();
    Salary getSa() const;
    static int getTime();
    string print() const;
};

#endif