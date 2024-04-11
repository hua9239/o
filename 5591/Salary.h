#ifndef SALARY_H
#define SALARY_H

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
    int print() const;
};

#endif