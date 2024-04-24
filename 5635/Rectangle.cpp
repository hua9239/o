#include "Rectangle.h"

Rectangle::Rectangle()
{
    width = 0;
    height = 0;
}

Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setHeight(double h)
{
    height = h;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::getArea() const
{
    return width * height;
}