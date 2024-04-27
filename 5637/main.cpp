#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

Rectangle *sortBySelection(Rectangle rectIn[], int size)
{
    Rectangle *rectOut = new Rectangle[size];
    for (int i = 0; i < size; i++)
    {
        rectOut[i] = rectIn[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (rectOut[j].getArea() < rectOut[minIndex].getArea())
            {
                minIndex = j;
            }
        }
        Rectangle temp = rectOut[i];
        rectOut[i] = rectOut[minIndex];
        rectOut[minIndex] = temp;
    }
    return rectOut;
}

int main()
{
    const int arrSize = 10;
    Rectangle rectArr[arrSize];
    double width, height;

    for (int i = 0; i < arrSize; i++)
    {
        cin >> width >> height;
        rectArr[i] = Rectangle(width, height);
    }

    cout << "----- Original Array -----" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << fixed << setprecision(2) << rectArr[i].getArea() << endl;
    }
    Rectangle *returnArray = sortBySelection(rectArr, arrSize);
    cout << "----- Return Sorted Array -----" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << fixed << setprecision(2) << returnArray[i].getArea() << endl;
    }
}