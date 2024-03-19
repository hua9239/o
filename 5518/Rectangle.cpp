#include <iostream>
using namespace std;
#include "Rectangle.h"

void Rectangle::setRectangle(double w, double h)
{
    width = w;
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