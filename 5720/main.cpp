#include <iostream>
#include <fstream>
#include <string>
#include "Staff.h"
using namespace std;

void initializeDatabase();
void loadStaffData(Staff *staff);
void printStaffData(Staff *staff);

int main()
{
    Staff staff[3];
    initializeDatabase();
    loadStaffData(staff);
    printStaffData(staff);
}

void initializeDatabase()
{
    fstream io;
    io.open("a.txt", ios::out);
    io << "Eden 2002 3 2 10 20\n";
    io << "Asuna 1995 5 4 8 30\n";
    io << "Alice 2000 10 10 9 12";
    io.close();
}

void loadStaffData(Staff *staff)
{
    fstream io;
    io.open("a.txt", ios::in);
    for (int i = 0; i < 3; i++)
    {
        string n;
        int y, m, d, h, w;
        io >> n >> y >> m >> d >> h >> w;
        staff[i] = Staff(n, Birthday(y, m, d), Salary(h, w));
    }
    io.close();
}

void printStaffData(Staff *staff)
{
    for (int i = 0; i < 3; i++)
    {
        staff[i].print();
        cout << endl;
    }
}