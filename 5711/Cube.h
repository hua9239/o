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
    Cube(double length, string color);
    void setLength(double length);
    double getLength() const;
    double getVolume() const;
    double getArea() const;

private:
    double length;
};

#endif