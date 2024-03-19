#include "score.h"

Score::Score(std::string n, int m)
{
    name = n;
    math = m;
}
void Score::setName(std::string n)
{
    name = n;
}
void Score::setMath(int m)
{
    math = m;
}
std::string Score::getName()
{
    return name;
}
int Score::getMath()
{
    return math;
}