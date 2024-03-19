#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    for (int i = 0; i < 2; i++)
    {
        Time t;
        int h, m, s;
        cin >> h >> m >> s;
        t.setHour(h);
        t.setMinute(m);
        t.setSecond(s);
        if (t.validTime())
        {
            t.print();
        }
    }
}