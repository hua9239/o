#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

class Student
{
private:
    string name, ID;
    Course course;
    static int numOfStu;

public:
    Student();
    Student(string n, string i, Course c);
    void setName(string n);
    void setID(string i);
    Course *setCourse();
    string getName() const;
    string getID() const;
    Course getCourse() const;
    static int getNumOfStu();
    void printStudent() const;
};

#endif