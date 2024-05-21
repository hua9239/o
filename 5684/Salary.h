#ifndef SALARY_H
#define SALARY_H

#include <string>
#include <fstream>
using namespace std;

class Salary
{
private:
    string name;
    int money, hours, workDay;

public:
    Salary();
    Salary(string name, int money, int hours, int workDay);
    void setName(string);
    void setMoney(int);
    void setHours(int);
    void setworkDay(int);
    string getName() const;
    int getMoney() const;
    int getHours() const;
    int getworkDay() const;
    int getSalary() const;
};

#endif