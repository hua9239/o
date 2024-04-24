#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width, height;
    static int numOfRect;

public:
    Rectangle();
    Rectangle(double w, double h);
    ~Rectangle();
    void setWidth(double w);
    void setHeight(double h);
    double getWidth() const;
    double getHeight() const;
    double getArea() const;
    static int getNumOfRect();
    void print() const;
};

#endif