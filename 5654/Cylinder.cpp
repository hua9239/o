#include "Cylinder.h"

Cylinder::Cylinder()
{
    radius = 0;
    height = 0;
}

void Cylinder::setRadius(double radius)
{
    this->radius = radius;
}

void Cylinder::setHeight(double height)
{
    this->height = height;
}

double Cylinder::getRadius() const
{
    return radius;
}

double Cylinder::getHeight() const
{
    return height;
}

double Cylinder::getVolume() const
{
    return M_PI * pow(radius, 2) * height;
}