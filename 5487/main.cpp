#include <iostream>
#include <string>
using namespace std;

class Food
{
private:
    string name;
    int price, quantity;

public:
    void setFood()
    {
        cin >> name >> price >> quantity;
    }
    void printData()
    {
        cout << name << " " << price << " " << quantity << endl;
    }
    double getTotal()
    {
        return price * quantity;
    }
};

void printDay(Food myFood_1, Food myFood_2, Food myFood_3)
{
    myFood_1.printData();
    myFood_2.printData();
    myFood_3.printData();
    cout << "-----" << endl;
    cout << "當日金額:" << myFood_1.getTotal() + myFood_2.getTotal() + myFood_3.getTotal() << endl;
}

void printWeek(Food myFood[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += myFood[i].getTotal();
    }
    cout << "本週總金額：" << total << endl;
}
int main()
{
    Food myFood[21];
    for (int i = 0; i < 21; i++)
    {
        myFood[i].setFood();
    }

    for (int i = 0; i < 21; i += 3)
    {
        printDay(myFood[i], myFood[i + 1], myFood[i + 2]);
    }

    printWeek(myFood, 21);
}