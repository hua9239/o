#include "Course.h"

Course::Course()
{
    math = 0;
    english = 0;
    computer = 0;
}

Course::Course(int m, int e, int c)
{
    math = m;
    english = e;
    computer = c;
}

void Course::setMath(int m)
{
    math = m;
}

void Course::setEnglish(int e)
{
    english = e;
}

void Course::setComputer(int c)
{
    computer = c;
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
    cout << math << " " << english << " " << computer << " Sum:" << getSum() << " Average:" << fixed << setprecision(1) << getAverage();
}