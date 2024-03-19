#include "BMI.h"

void BMI::setName(std::string n)
{
    name = n;
}
void BMI::setWeightAndHeight(double w, double h)
{
    weight = w;
    height = h;
}
std::string BMI::getName()
{
    return name;
}
double BMI::getBMI()
{
    return weight / (height * height);
}
