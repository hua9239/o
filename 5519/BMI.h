#ifndef BMI_H
#define BMI_H
#include <string>

class BMI
{
    std::string name;
    double weight, height;

public:
    void setName(std::string n);
    void setWeightAndHeight(double, double);
    std::string getName();
    double getBMI();
};

#endif