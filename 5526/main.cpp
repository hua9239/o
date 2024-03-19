#include <iostream>
#include <iomanip>
#include <string>
#include "StuCard.h"
using namespace std;

int main()
{
    for (int i = 0; i < 2; i++)
    {
        StuCard stu;
        string name, stdID;
        double chinese, english, math;
        cin >> name >> stdID >> chinese >> english >> math;

        stu.setName(name);
        stu.setStdID(stdID);
        stu.setChinese(chinese);
        stu.setEnglish(english);
        stu.setMath(math);
        stu.print();
    }
}