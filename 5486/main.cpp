#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class StuCard
{
public:
    string name, stdID;
    double chinese, english, math, science, history, geography, computerScience;

    void setStuCard()
    {
        cin >> name >> stdID >> chinese >> english >> math >> science >> history >> geography >> computerScience;
    }
    void printStuCard()
    {
        cout << name << " " << stdID << " " << fixed << setprecision(1) << (chinese + english + math + science + history + geography + computerScience) / 7 << endl;
    }
};

int main()
{
    StuCard stuCard1;
    StuCard stuCard2;

    stuCard1.setStuCard();
    stuCard2.setStuCard();

    stuCard1.printStuCard();
    stuCard2.printStuCard();
}