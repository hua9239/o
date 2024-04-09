#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stringstream ss(s);
        int total = 0;
        while (!ss.eof())
        {
            string temp;
            getline(ss, temp, ',');

            total += stoi(temp);
        }
        cout << total << endl;
    }
}