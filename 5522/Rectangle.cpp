#include "Rectangle.h"

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double h)
{
    height = h;
}

double Rectangle::getArea()
{
    return width * height;
}

double Rectangle::getPerimeter()
{
    return 2 * (width + height);
}