#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

void sortBySelection(Rectangle const arr[], Rectangle sortedArr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        sortedArr[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (sortedArr[j].getArea() < sortedArr[minIndex].getArea())
            {
                minIndex = j;
            }
        }
        Rectangle temp = sortedArr[i];
        sortedArr[i] = sortedArr[minIndex];
        sortedArr[minIndex] = temp;
    }
}

int main()
{
    const int arrSize = 10;
    Rectangle rectArr[arrSize], sortedArr[arrSize];
    double width, height;

    for (int i = 0; i < arrSize; i++)
    {
        cin >> width >> height;
        rectArr[i] = Rectangle(width, height);
    }
    sortBySelection(rectArr, sortedArr, arrSize);
    cout << "----- Original Array -----" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << fixed << setprecision(2) << rectArr[i].getArea() << endl;
    }
    cout << "----- Sorted Array -----" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << fixed << setprecision(2) << sortedArr[i].getArea() << endl;
    }
}