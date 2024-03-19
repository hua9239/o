#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Watch
{
public:
    string brand;
    string color;
    double price;
    double weight;
    void print()
    {
        cout << fixed << setprecision(2) << brand << " " << color << " " << price / weight << endl;
    }
};

int main()
{
    Watch myWatch1, myWatch2;
    cin >> myWatch1.brand >> myWatch1.color >> myWatch1.price >> myWatch1.weight;
    cin >> myWatch2.brand >> myWatch2.color >> myWatch2.price >> myWatch2.weight;
    myWatch1.print();
    myWatch2.print();
}