#include "Student.h"

int Student::numOfStu = 0;

Student::Student()
{
    name = "";
    ID = "";
    course = Course();
    numOfStu++;
}

Student::Student(string n, string i, Course c)
{
    name = n;
    ID = i;
    course = c;
}

void Student::setName(string n)
{
    name = n;
}

void Student::setID(string i)
{
    ID = i;
}

Course *Student::setCourse()
{
    return &course;
}

string Student::getName() const
{
    return name;
}

string Student::getID() const
{
    return ID;
}

Course Student::getCourse() const
{
    return course;
}

int Student::getNumOfStu()
{
    return numOfStu;
}

void Student::printStudent() const
{
    cout << name << " " << ID << " ";
    course.printScore();
    cout << endl;
}