#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << char(65 + j);
        }

        for (int j = i; j > 0; j--)
        {
            cout << char(64 + j);
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}