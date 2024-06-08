#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>
#include "Course.h"
using namespace std;

class Student
{
private:
    char name[30];
    char ID[30];
    Course course;
    static int numOfStu;

public:
    Student();
    ~Student();
    Student(const char name[], const char ID[], const Course &course);
    void setName(const char name[]);
    const char *getName() const;
    void setID(const char ID[]);
    const char *getID() const;
    void setCourse(const Course &course);
    const Course &getCourse() const;
    static int getNumOfStu();
    void printStudent() const;
};

#endif