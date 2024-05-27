#include "StuCard.h"

StuCard::StuCard()
{
    name = "";
    sex = 0;
    for (int i = 0; i < 3; i++)
        scoreAry[i] = 0;
}

StuCard::StuCard(string n, bool s, double s1, double s2, double s3)
{
    name = n;
    sex = s;
    scoreAry[0] = s1;
    scoreAry[1] = s2;
    scoreAry[2] = s3;
}

void StuCard::setName(string n)
{
    name = n;
}

void StuCard::setSex(bool s)
{
    sex = s;
}

void StuCard::setScore(int i, double s)
{
    scoreAry[i] = s;
}

string StuCard::getName()
{
    return name;
}

bool StuCard::getSex()
{
    return sex;
}

double StuCard::getScore(int i)
{
    return scoreAry[i];
}
