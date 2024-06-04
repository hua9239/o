#ifndef BALL_H
#define BALL_H

#include "GeometricObject.h"
#include <string>
#include <cmath>
using namespace std;

class Ball : public GeometricObject
{
public:
    Ball();
    Ball(double radius, string color);
    void setRadius(double radius);
    double getRadius() const;
    double getVolume() const;
    double getArea() const;

private:
    double radius;
};

#endif