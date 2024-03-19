#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Item
{
public:
    string item, volume;
    int singlePrice, quantity;

    void setItem()
    {
        cin >> item >> volume >> singlePrice >> quantity;
    }
    void printItem()
    {
        cout << item << " " << volume << " " << singlePrice * quantity << endl;
    }
    int Total()
    {
        return singlePrice * quantity;
    }
};

int main()
{
    Item shoppingList[3];
    for (int i = 0; i < 3; i++)
    {
        shoppingList[i].setItem();
    }
    for (int i = 0; i < 3; i++)
    {
        shoppingList[i].printItem();
    }

    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += shoppingList[i].Total();
    }
    cout << "[Total] " << total << endl;
}