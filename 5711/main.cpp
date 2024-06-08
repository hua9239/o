#include <iostream>
#include <iomanip>
#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
using namespace std;

void display(GeometricObject &obj)
{
    cout << fixed << setprecision(1);
    cout << ", area:" << obj.getArea() << ", volume:" << obj.getVolume() << ", color:" << obj.getColor() << endl;
}

int main()
{
    double radius, length;
    string color, color2;
    cin >> radius >> color >> length >> color2;
    Ball ball(radius, color);
    Cube cube(length, color2);
    cout << fixed << setprecision(1);
    cout << "Ball" << endl
         << "radius: " << ball.getRadius();
    display(ball);
    cout << "Cube" << endl
         << "length: " << cube.getLength();
    display(cube);
    return 0;
}