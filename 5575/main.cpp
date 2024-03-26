#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = 0;
    int min = 1000000;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        min = t < min ? t : min;
        max = t > max ? t : max;
        sum += t;
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Total: " << sum << endl;
}