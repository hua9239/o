#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
using namespace std;

class Triangle
{
private:
    double base, height;
    static int numOfTriangles;

public:
    Triangle();
    ~Triangle();
    void setBase(double);
    void setHeight(double);
    double getBase() const;
    double getHeight() const;
    double getArea() const;
    static int getNumOfTriangles();
    void print() const;
};

#endif