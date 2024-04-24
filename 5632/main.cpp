#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    double w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    Rectangle r1(w1, h1), r2(w2, h2);
    cout << fixed << setprecision(2);
    cout << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";
    r1.swapByReference(r2);
    cout << r1.getArea() << " " << r2.getArea() << endl;

    cout << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";
    r1.swapByPointer(&r2);
    cout << r1.getArea() << " " << r2.getArea() << endl;
}