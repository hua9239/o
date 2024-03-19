#include <iostream>
#include "Time.h"
using namespace std;

void Time::setHour(int h)
{
    hour = h;
}
void Time::setMinute(int m)
{
    minute = m;
}
void Time::setSecond(int s)
{
    second = s;
}
bool Time::validTime()
{
    if (hour > 24 || hour < 0 || minute > 60 || minute < 0 || second > 60 || second < 0)
    {
        cout << "時間不合理" << endl;
        return false;
    }
    return true;
}

void Time::print()
{
    cout << "時間: " << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute << ":"
         << (second < 10 ? "0" : "") << second << endl;
}