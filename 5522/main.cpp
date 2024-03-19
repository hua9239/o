#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rectangle1;
    Rectangle rectangle2;

    double w, h;
    cin >> w >> h;
    rectangle1.setWidth(w);
    rectangle1.setLength(h);
    cin >> w >> h;
    rectangle2.setWidth(w);
    rectangle2.setLength(h);

    cout << fixed << setprecision(2) << rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
    cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

    rectangle2.setWidth(5.0);
    rectangle2.setLength(2.5);

    cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;
}