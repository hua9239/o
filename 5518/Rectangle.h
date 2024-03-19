#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    double width, height;

public:
    void setRectangle(double w, double h);
    double getArea();
    double getPerimeter();
};

#endif