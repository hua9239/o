#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Course
{
private:
    int math, english, computer;

public:
    Course();
    Course(int m, int e, int c);
    void setMath(int m);
    void setEnglish(int e);
    void setComputer(int c);
    int getMath() const;
    int getEnglish() const;
    int getComputer() const;
    int getSum() const;
    double getAverage() const;
    void printScore() const;
};

#endif