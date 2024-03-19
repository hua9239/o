#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int count[26] = {0};
    int n;
    cin >> n;

    while (n--)
    {
        char s;
        cin >> s;
        count[s - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (isPrime(count[i]))
        {
            cout << (char)('A' + i) << " ";
        }
    }
}