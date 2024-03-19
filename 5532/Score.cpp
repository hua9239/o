#include "Score.h"

Score::Score(string n, int m)
{
    name = n;
    math = m;
}
void Score::setName(string n)
{
    name = n;
}
void Score::setMath(int m)
{
    math = m;
}
string Score::getName()
{
    return name;
}
int Score::getMath()
{
    return math;
}
void Score::print()
{
    cout << name << " " << math << endl;
}