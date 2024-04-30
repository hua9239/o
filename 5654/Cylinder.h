#ifndef CYLINDER_H
#define CYLINDER_H

#include <cmath>

class Cylinder
{
private:
    double radius, height;

public:
    Cylinder();
    void setRadius(double);
    void setHeight(double);
    double getRadius() const;
    double getHeight() const;
    double getVolume() const;
};

#endif