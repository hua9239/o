#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width, height;
    static int numOfRect;

public:
    Rectangle();
    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;
    double getArea() const;
    int getNumOfRect();
};

#endif