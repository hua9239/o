#include <iostream>
using namespace std;

int main()
{
    int N[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string R[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int num;
    cin >> num;

    while (num)
    {
        for (int i = 0; i < 13; i++)
        {
            if (num >= N[i])
            {
                num -= N[i];
                cout << R[i];
                break;
            }
        }
    }
}