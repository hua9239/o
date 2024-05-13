#include <iostream>
#include "Queue.h"
using namespace std;

int calc(char A, char B, char op)
{
    int a = A - '0';
    int b = B - '0';
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
    Queue<char> charQueue;
    string input;
    getline(cin, input);

    for (char c : input)
    {
        charQueue.push(c);
    }

    int sum = 0;

    while (charQueue.getSize() > 1)
    {
        char A = charQueue.pop();
        char op = charQueue.pop();
        char B = charQueue.pop();
        int result = calc(A, B, op);
        cout << A << op << B << '=';
        cout << result << endl;
        sum += result;
    }
    cout << "Sum of the queue: " << sum << endl;
    return 0;
}