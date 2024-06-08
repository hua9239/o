#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <iomanip>
using namespace std;

class Course
{
private:
    int math, english, computer;

public:
    Course();
    Course(int math, int english, int computer);
    void setMath(int math);
    void setEnglish(int english);
    void setComputer(int computer);
    int getMath() const;
    int getEnglish() const;
    int getComputer() const;
    int getSum() const;
    double getAverage() const;
    void printScore() const;
};

#endif