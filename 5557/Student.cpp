#include "Student.h"
#include "Date.h"

Student::Student(string n, Date d, int s)
{
    name = n;
    birthDay = d;
    score = s;
}
void Student::setName(string n)
{
    name = n;
}
string Student::getName() const
{
    return name;
}
void Student::setDate(int m, int d, int y)
{
    birthDay.setMonth(m);
    birthDay.setDay(d);
    birthDay.setYear(y);
}
Date Student::getDate() const
{
    return birthDay;
}
void Student::setScore(int s)
{
    score = s;
}
int Student::getScore() const
{
    return score;
}
void Student::print()
{
    cout << name << ' ';
    birthDay.print();
    cout << ' ' << score << endl;
}