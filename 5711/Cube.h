#ifndef CUBE_H
#define CUBE_H

#include "GeometricObject.h"
#include <string>
#include <cmath>
using namespace std;

class Cube : public GeometricObject
{
public:
    Cube();
    Cube(double side, string color);
    void setSide(double side);
    double getSide() const;
    double getVolume() const;
    double getArea() const;

private:
    double side;
};

#endif