// 什麼智障題目
#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

int main()
{
    Staff staff1("Kirito", Birthday(2002, 3, 2), Salary(10, 20));
    Staff staff2("Asuna", Birthday(2003, 5, 4), Salary(8, 30));
    Staff staff3("Alice", Birthday(2000, 10, 8), Salary(3, 4));

    string name;
    int year, day, hour;
    cin >> name >> year >> day >> hour;

    staff1.setName(name);
    (*staff2.setBr()).setYear(year);
    (*staff3.setBr()).setDay(day);
    (*staff1.setSa()).setHours(hour);
    (*staff3.setSa()).setHours(hour);

    cout << staff1.print() << endl;
    cout << staff2.print() << endl;
    cout << staff3.print() << endl;

    cout << "Staff: " << Staff::getTime() << endl;
}