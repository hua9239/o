#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width, height;

public:
    Rectangle();
    Rectangle(double w, double h);
    void setWidth(double w);
    void setHeight(double h);
    double getWidth() const;
    double getHeight() const;
    double getArea() const;
};

#endif