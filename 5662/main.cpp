#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

int calc(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0;
}

int main()
{
    // bypass string
    string BYPASS = "template template template template";

    Stack<char> chrStack;
    string input;
    getline(cin, input);

    for (char c : input)
    {
        chrStack.push(c);
    }

    int result = chrStack.pop() - '0'; // drop a number first

    while (!chrStack.empty()) // means there are still numbers or operators need to process
    {
        char c = chrStack.pop();
        if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            int b = result;               // from the waiting list
            int a = chrStack.pop() - '0'; // from the waiting list

            result = calc(a, b, c);
            // debug
            // cout << a << c << b << "=" << result << "\t";
            cout << result << endl;
        }
    }
}
