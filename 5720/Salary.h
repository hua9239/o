#ifndef SALARY_H
#define SALARY_H

#include <iostream>
using namespace std;

class Salary
{
private:
    int hours, workDay;

public:
    Salary();
    Salary(int h, int w);
    void setHours(int h);
    int getHours() const;
    void setWorkDay(int w);
    int getWorkDay() const;
    int getMonthlySalary() const;
    void print() const;
};

#endif