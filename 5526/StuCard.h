#ifndef STU_H
#define STU_H

#include <string>
using namespace std;

class StuCard
{
private:
    string name, stdID;
    double chinese, english, math;

public:
    void setName(string);
    void setStdID(string);
    void setChinese(double);
    void setEnglish(double);
    void setMath(double);
    void print();
};

#endif