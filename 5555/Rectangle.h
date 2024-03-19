#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width, height;

public:
    Rectangle();
    void setWidth(double);
    void setHeight(double);
    double getWidth();
    double getHeight();
    double getArea();
};

#endif