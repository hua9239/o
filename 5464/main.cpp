#include <iostream>
using namespace std;

bool isDuplicate(int arr[], int num, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }
    return false;
}

void front(int arr[], int count)
{
    int max1 = 0, max2 = 0, max3 = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
        {
            max3 = arr[i];
        }
    }
    cout << "Top three max: " << max1 << " " << max2 << " " << max3 << endl;
}

void print(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[20];
    int count = 0;
    int num;
    for (int i = 0; i < 20; i++)
    {
        cin >> num;
        if (num >= 10 && num <= 100 && !isDuplicate(arr, num, count))
        {
            arr[count] = num;
            count++;
        }
    }

    print(arr, count);
    front(arr, count);

    return 0;
}