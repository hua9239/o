#include <iostream>
#include <algorithm>
using namespace std;

void verticalbar(int score[], int arraySize)
{
    int count[11] = {0};
    for (int i = 0; i < arraySize; i++)
    {
        count[score[i] / 10]++;
    }
    int max = *max_element(count, count + 11);

    for (int i = max; i > 0; i--)
    {
        for (int j = 0; j < 11; j++)
        {
            if (count[j] >= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    const int arraySize = 100;
    int score[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> score[i];
    }
    verticalbar(score, arraySize);
}