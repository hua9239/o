#include "Cube.h"

Cube::Cube()
{
    length = 0;
}

Cube::Cube(double length, string color)
{
    this->length = length;
    setColor(color);
}

void Cube::setLength(double length)
{
    this->length = length;
}

double Cube::getLength() const
{
    return length;
}

double Cube::getVolume() const
{
    return pow(length, 3);
}

double Cube::getArea() const
{
    return 6 * pow(length, 2);
}