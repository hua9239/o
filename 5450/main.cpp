#include <iostream>
using namespace std;

bool check(int n[], int num)
{
    for (int i = 0; i < 4; i++)
    {
        if (n[i] == num)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n[5] = {-1, -1, -1, -1, -1};

    for (int i = 0; i < 5;)
    {
        int tmp;
        cin >> tmp;

        if (tmp < 1 || tmp > 10 || !check(n, tmp))
        {
            cout << "Please re - enter since the added number is repeated:" << endl;
            continue;
        }

        n[i] = tmp;
        i++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }
}