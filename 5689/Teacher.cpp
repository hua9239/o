#include "Teacher.h"

Teacher::Teacher()
{
    strcpy(name, "NoName");
    age = 0;
    score = 0.0;
}

Teacher::Teacher(const char *n, int a, double s)
{
    strcpy(name, n);
    age = a;
    score = s;
}

void Teacher::setName(const char *n)
{
    strcpy(name, n);
}

void Teacher::setAge(int a)
{
    age = a;
}

void Teacher::setScore(double s)
{
    score = s;
}

const char *Teacher::getName() const
{
    return name;
}

int Teacher::getAge() const
{
    return age;
}

double Teacher::getScore() const
{
    return score;
}

void Teacher::print() const
{
    cout << fixed << setprecision(1);
    cout << "Name:" << name << " Age:" << age << " Score:" << score << endl;
}