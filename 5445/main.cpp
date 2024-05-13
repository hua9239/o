#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int count[26] = {0};
    while (n--)
    {
        char c;
        cin >> c;
        count[c - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (isPrime(count[i]))
        {
            cout << (char)('A' + i) << " ";
        }
    }
}