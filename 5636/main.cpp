#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

Rectangle *sortBySelection(Rectangle arr[], int size)
{
    Rectangle *returnArray = arr;
    for (int i = 0; i < size; i++)
    {
        returnArray[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (returnArray[j].getArea() < returnArray[minIndex].getArea())
            {
                minIndex = j;
            }
        }
        Rectangle temp = returnArray[i];
        returnArray[i] = returnArray[minIndex];
        returnArray[minIndex] = temp;
    }
    return returnArray;
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

    cout << "----- Sorted Array -----" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << fixed << setprecision(2) << rectArr[i].getArea() << endl;
    }

    cout << "----- Return Sorted Array -----" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << fixed << setprecision(2) << returnArray[i].getArea() << endl;
    }
}