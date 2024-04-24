#include "Rectangle.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
    width = 0;
    height = 0;
}

Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
    numOfRect++;
}

Rectangle::~Rectangle()
{
    numOfRect--;
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

int Rectangle::getNumOfRect()
{
    return numOfRect;
}

void Rectangle::print() const
{
    cout << height << " " << width << " " << getArea() << endl;
}