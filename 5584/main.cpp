#include <iostream>
#include <string>
#include "StringProcess.h"
using namespace std;

int main()
{
    string s;
    cin >> s;
    StringProcess sp(s);

    cout << "Input string: " << s << endl;
    cout << "Reversed string: " << sp.reverse_str() << endl;
    cout << "Even characters: " << sp.getEvenChars() << endl;
    cout << "Odd characters: " << sp.getOddChars() << endl;
    cout << "Count upper characters: " << sp.upper_count() << endl;
    cout << "Count lower characters: " << sp.lower_count() << endl;
}