#include <iostream>
using namespace std;

#define ROWS 4
#define COLUMNS 4

int sumOfElements(int arr[ROWS][COLUMNS], int stx, int sty, int edx, int edy)
{
    int sum = 0;
    for (int i = stx; i <= edx; i++)
    {
        for (int j = sty; j <= edy; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main()
{
    int arr[ROWS][COLUMNS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cin >> arr[i][j];
        }
    }
    int stx, sty, edx, edy;
    cin >> stx >> sty >> edx >> edy;

    cout << sumOfElements(arr, stx, sty, edx, edy) << endl;
}