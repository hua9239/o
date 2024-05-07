#include <iostream>
using namespace std;

template <typename I>
void InsertionSort(I list[], int listSize)
{
    for (int i = 1; i < listSize; i++)
    {
        I currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}

template <typename I, typename U>
int BinarySearch(const I list[], U key, int listSize)
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key > list[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int list1[9] = {1, 5, 6, 2, 3, 7, 9, 8, 4};
    double list2[9] = {1.1, 5.5, 6.6, 2.2, 3.3, 7.7, 9.9, 8.8, 4.4};

    double key[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> key[i];
    }

    // process list1
    {
        cout << "From: ";
        for (int i = 0; i < 9; i++)
        {
            cout << list1[i] << (i == 8 ? "\n" : ",");
        }
        cout << "To: ";
        InsertionSort(list1, 9);
        for (int i = 0; i < 9; i++)
        {
            cout << list1[i] << (i == 8 ? "\n" : ",");
        }

        for (int i = 0; i < 3; i++)
        {
            cout << key[i] << " at " << BinarySearch(list1, key[i], 9) << endl;
        }
    }
    // process list2
    {
        cout << "From: ";
        for (int i = 0; i < 9; i++)
        {
            cout << list2[i] << (i == 8 ? "\n" : ",");
        }
        cout << "To: ";
        InsertionSort(list2, 9);
        for (int i = 0; i < 9; i++)
        {
            cout << list2[i] << (i == 8 ? "\n" : ",");
        }

        for (int i = 3; i < 6; i++)
        {
            cout << key[i] << " at " << BinarySearch(list2, key[i], 9) << endl;
        }
    }
}