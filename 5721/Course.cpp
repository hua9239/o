#include "Course.h"

Course::Course()
{
    math = 0;
    english = 0;
    computer = 0;
}

Course::Course(int math, int english, int computer)
{
    this->math = math;
    this->english = english;
    this->computer = computer;
}

void Course::setMath(int math)
{
    this->math = math;
}

void Course::setEnglish(int english)
{
    this->english = english;
}

void Course::setComputer(int computer)
{
    this->computer = computer;
}

int Course::getMath() const
{
    return math;
}

int Course::getEnglish() const
{
    return english;
}

int Course::getComputer() const
{
    return computer;
}

int Course::getSum() const
{
    return math + english + computer;
}

double Course::getAverage() const
{
    return (math + english + computer) / 3.0;
}

void Course::printScore() const
{
    cout << fixed << setprecision(1);
    cout << math << " " << english << " " << computer << " Sum:" << getSum() << " Average:" << fixed << setprecision(1) << getAverage() << endl;
}