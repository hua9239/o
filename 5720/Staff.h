#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include "Birthday.h"
#include "Salary.h"
using namespace std;

class Staff
{
private:
    string name;
    Birthday br;
    Salary sa;

public:
    Staff();
    Staff(string n, Birthday b, Salary s);
    void setName(string n);
    string getName() const;
    void setBr(Birthday b);
    Birthday getBr() const;
    void setSa(Salary s);
    Salary getSa() const;
    void print() const;
};

#endif