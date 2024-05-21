#include <iostream>
#include <fstream>
#include <string>
#include "Salary.h"
using namespace std;

void writeToFile()
{
    ofstream file("1.txt");
    file << R"del(Baia 199 5 3
Evan 220 5 8
Charlie 204 6 3
Duet 266 3 6
Kimora 193 5 2
Chaviva 210 5 4)del";
    file.close();
}

void readFromFile(Salary *s, int &n)
{
    ifstream file("1.txt");
    string name;
    int money, hours, workDay;
    while (file >> name >> money >> hours >> workDay)
    {
        s[n] = Salary(name, money, hours, workDay);
        n++;
    }
    file.close();
}

int main()
{
    writeToFile();
    Salary s[6];
    int n = 0;
    readFromFile(s, n);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].getName() << " " << s[i].getSalary() << endl;
    }
    return 0;
}