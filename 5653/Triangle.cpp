#include "Triangle.h"

int Triangle::numOfTriangles = 0;

Triangle::Triangle()
{
    base = 0;
    height = 0;
    numOfTriangles++;
}

Triangle::~Triangle()
{
    numOfTriangles--;
}

void Triangle::setBase(double base)
{
    this->base = base;
}

void Triangle::setHeight(double height)
{
    this->height = height;
}

double Triangle::getBase() const
{
    return base;
}

double Triangle::getHeight() const
{
    return height;
}

double Triangle::getArea() const
{
    return base * height / 2;
}

int Triangle::getNumOfTriangles()
{
    return numOfTriangles;
}

void Triangle::print() const
{
    // 5 4 Area: 10 Perimeter: 15
    cout << base << " " << height << " Area: " << getArea() << " Perimeter: " << base * 3 << endl;
}