#include <iostream>
#include <iomanip>
#include "Cylinder.h"
using namespace std;

void sortByBubble(Cylinder cylinderIn[], Cylinder cylinderOut[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cylinderOut[i] = cylinderIn[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (cylinderOut[j].getVolume() > cylinderOut[j + 1].getVolume())
            {
                Cylinder temp = cylinderOut[j];
                cylinderOut[j] = cylinderOut[j + 1];
                cylinderOut[j + 1] = temp;
            }
        }
    }
}

int main()
{
    Cylinder cylinders[10];
    Cylinder sortedCylinders[10];
    cout << fixed << setprecision(2);
    for (int i = 0; i < 10; i++)
    {
        double radius, height;
        cin >> radius >> height;
        cylinders[i].setRadius(radius);
        cylinders[i].setHeight(height);
    }
    // ----- Original Array -----
    cout << "----- Original Array -----" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << cylinders[i].getVolume() << endl;
    }
    // ----- Sorted Array -----
    cout << "----- Sorted Array -----" << endl;
    sortByBubble(cylinders, sortedCylinders, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << sortedCylinders[i].getVolume() << endl;
    }
}
