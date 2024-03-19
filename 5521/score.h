#ifndef SCORE_H
#define SCORE_H

#include <string>

class Score
{
    std::string name;
    int math;

public:
    Score(std::string, int);
    void setName(std::string);
    void setMath(int);
    std::string getName();
    int getMath();
};

#endif