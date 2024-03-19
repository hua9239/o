#include <iostream>
#include "score.h"
using namespace std;

int main()
{
    Score score1("John", 90);
    Score score2("Mary", 80);

    string name;
    int math;
    cin >> name >> math;
    score1.setName(name);

    cin >> name >> math;
    score2.setMath(math);

    cout << score1.getName() << " " << score1.getMath() << endl;
    cout << score2.getName() << " " << score2.getMath() << endl;
}