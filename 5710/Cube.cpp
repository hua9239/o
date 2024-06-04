#include "Cube.h"

Cube::Cube()
{
    side = 0;
}

Cube::Cube(double side, string color)
{
    this->side = side;
    setColor(color);
}

void Cube::setSide(double side)
{
    this->side = side;
}

double Cube::getSide() const
{
    return side;
}

double Cube::getVolume() const
{
    return pow(side, 3);
}

double Cube::getArea() const
{
    return 6 * pow(side, 2);
}