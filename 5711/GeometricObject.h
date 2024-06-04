#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <string>
using namespace std;

class GeometricObject
{
public:
    GeometricObject();
    GeometricObject(string color);
    void setColor(string color);
    string getColor() const;
    virtual double getVolume() const = 0;
    virtual double getArea() const = 0;

private:
    string color;
};

#endif