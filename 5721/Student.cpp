#include "Student.h"

int Student::numOfStu = 0;

Student::Student()
{
    strcpy(name, "");
    strcpy(ID, "");
    Course course;
    numOfStu++;

    // debug
    // cout << "|info|\tStudent::Student()" << endl;
}

Student::~Student()
{
    numOfStu--;
    // debug
    // cout << "|info|\tStudent::~Student()" << endl;
}

Student::Student(const char name[], const char ID[], const Course &course)
{
    strcpy(this->name, name);
    strcpy(this->ID, ID);
    this->course = course;
    numOfStu++;

    // debug
    // cout << "|info|\tStudent::Student(const char name[], const char ID[], const Course &course)" << endl;
}

void Student::setName(const char name[])
{
    strcpy(this->name, name);
}

const char *Student::getName() const
{
    return name;
}

void Student::setID(const char ID[])
{
    strcpy(this->ID, ID);
}

const char *Student::getID() const
{
    return ID;
}

void Student::setCourse(const Course &course)
{
    this->course = course;
}

const Course &Student::getCourse() const
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
}