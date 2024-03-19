#include <iostream>
using namespace std;

class Pant
{
private:
    string color, type;
    double length, price;

public:
    void setColor(string c)
    {
        color = c;
    }
    void setType(string t)
    {
        type = t;
    }
    void setLength(double l)
    {
        length = l;
    }
    void setPrice(double p)
    {
        price = p;
    }
    string getType()
    {
        return type;
    }
    void print()
    {
        cout << color << " " << type << " " << length << " " << price << endl;
    }
};

int main()
{
    Pant P[10];
    for (int i = 0; i < 10; i++)
    {
        string c, t;
        double l, p;
        cin >> c >> t >> l >> p;
        P[i].setColor(c);
        P[i].setType(t);
        P[i].setLength(l);
        P[i].setPrice(p);
    }

    string type;
    cin >> type;

    for (int i = 0; i < 10; i++)
    {
        if (P[i].getType() == type)
        {
            P[i].print();
        }
    }
}