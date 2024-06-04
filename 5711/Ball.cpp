#include "Ball.h"

Ball::Ball()
{
    radius = 0;
}

Ball::Ball(double radius, string color)
{
    this->radius = radius;
    setColor(color);
}

void Ball::setRadius(double radius)
{
    this->radius = radius;
}

double Ball::getRadius() const
{
    return radius;
}

double Ball::getVolume() const
{
    return 4.0 / 3.0 * 3.14159 * pow(radius, 3);
}

double Ball::getArea() const
{
    return 4.0 * 3.14159 * pow(radius, 2);
}
