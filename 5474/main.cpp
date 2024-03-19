#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    string color;
    double oilPrice;
    double tank;
    double calculatePrice()
    {
        return oilPrice * tank;
    }
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

    cout << myCar1.brand << " " << myCar1.color << " " << myCar1.calculatePrice() << endl;
    cout << myCar2.brand << " " << myCar2.color << " " << myCar2.calculatePrice() << endl;
}