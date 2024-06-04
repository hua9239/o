#include <iostream>
#include <iomanip>
#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
using namespace std;

int main()
{
    double radius, length;
    string color, color2;
    cin >> radius >> color >> length >> color2;
    Ball ball(radius, color);
    Cube cube(length, color2);
    cout << fixed << setprecision(1);
    cout << "Ball" << endl;
    cout << "radius:" << ball.getRadius() << ", area:" << ball.getArea() << ", volume:" << ball.getVolume() << ", color:" << ball.getColor() << endl;
    cout << "Cube" << endl;
    cout << "length:" << cube.getSide() << ", area:" << cube.getArea() << ", volume:" << cube.getVolume() << ", color:" << cube.getColor() << endl;
    return 0;
}