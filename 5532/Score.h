#ifndef SCORE_H
#define SCORE_H

#include <iostream>
#include <string>
using namespace std;

class Score
{
private:
    string name;
    int math;

public:
    Score(string, int);
    void setName(string);
    void setMath(int);
    string getName();
    int getMath();
    void print();
};

#endif