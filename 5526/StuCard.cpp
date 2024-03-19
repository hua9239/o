#include <iostream>
#include <iomanip>
#include <string>
#include "StuCard.h"
using namespace std;

void StuCard::setName(string n)
{
    name = n;
}
void StuCard::setStdID(string id)
{
    stdID = id;
}
void StuCard::setChinese(double c)
{
    chinese = c;
}
void StuCard::setEnglish(double e)
{
    english = e;
}
void StuCard::setMath(double m)
{
    math = m;
}
void StuCard::print()
{
    cout << name << " " << stdID << " " << fixed << setprecision(3) << (chinese + english + math) / 3 << endl;
}