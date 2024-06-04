#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Teacher
{
private:
    char name[20];
    int age;
    double score;

public:
    Teacher();
    Teacher(const char *name, int age, double score);
    void setName(const char *name);
    void setAge(int age);
    void setScore(double score);
    const char *getName() const;
    int getAge() const;
    double getScore() const;
    void print() const;
};
#endif