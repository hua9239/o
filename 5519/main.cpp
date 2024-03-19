#include <iostream>
#include <iomanip>
#include "BMI.h"
using namespace std;

int main()
{
    BMI bmi1;
    string name;
    double w, h;
    cin >> name >> w >> h;
    bmi1.setName(name);
    bmi1.setWeightAndHeight(w, h);

    cout << bmi1.getName() << " " << fixed << setprecision(2) << bmi1.getBMI() << endl;
}