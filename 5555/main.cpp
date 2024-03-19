#include <iostream>
#include "Rectangle.h"
using namespace std;

double sum(Rectangle rectArray[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += rectArray[i].getArea();
    }
    return sum;
}

void printRectangleArray(Rectangle rectArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;
    }
    cout << "Total: " << sum(rectArray, 4) << endl;
}

int main()
{
    Rectangle rectArray[4];
    for (int i = 0; i < 4; i++)
    {
        double w, h;
        cin >> w >> h;
        rectArray[i].setWidth(w);
        rectArray[i].setHeight(h);
    }

    printRectangleArray(rectArray, 4);

    return 0;
}