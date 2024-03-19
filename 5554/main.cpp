#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void printStringArray(string arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    string str;
    getline(cin, str);

    string word[100];
    int count = 0;
    stringstream ss(str);
    while (ss >> word[count])
    {
        count++;
    }

    printStringArray(word, count);

    cout << "Length: " << str.length() << endl;
    return 0;
}