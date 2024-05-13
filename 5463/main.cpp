#include <iostream>
using namespace std;

void maxAndMin(int *data, int n, int *max, int *min)
{
    *max = *data;
    *min = *data;

    for (int i = 0; i < n; i++)
    {
        if (*(data + i) > *max)
        {
            *max = *(data + i);
        }
        else if (*(data + i) < *min)
        {
            *min = *(data + i);
        }
    }
    cout << "Maximum: " << *max << endl;
    cout << "Minimum: " << *min << endl;
}

int main()
{
    int min, max, input, n;
    cin >> n;
    int *data = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        *(data + i) = input;
    }

    maxAndMin(data, n, &max, &min);

    delete[] data;
    return 0;
}