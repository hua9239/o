#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand, color;
    double oilPrice;
    int tank;
};

int main()
{
    Car myCar1;
    myCar1.brand = "Toyota";
    myCar1.color = "Orange";
    myCar1.oilPrice = 21.5;
    myCar1.tank = 50;

    Car myCar2;
    cin >> myCar2.brand >> myCar2.color >> myCar2.oilPrice >> myCar2.tank;

    cout << myCar1.brand << " " << myCar1.color << " " << myCar1.oilPrice * myCar1.tank << endl;
    cout << myCar2.brand << " " << myCar2.color << " " << myCar2.oilPrice * myCar2.tank << endl;
}