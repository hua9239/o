#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "StuCard.h"
using namespace std;

void writeToFile()
{
    ofstream file;
    file.open("StuCard", ios::out | ios::binary);
    file << R"del(Jerry 1 80.0 70.0 90.0
John 1 85.0 77.0 95.0
Mary 0 83.0 75.0 70.0
Tom 1 73.0 95.0 67.0
Claire 0 88.0 79.0 71.0)del";
    file.close();
}

void readFromFile()
{
    ifstream file;
    file.open("StuCard", ios::in | ios::binary);
    string name;
    bool sex;
    double scoreAry[3];

    cout << fixed << setprecision(1);
    while (file >> name >> sex >> scoreAry[0] >> scoreAry[1] >> scoreAry[2])
    {
        cout << name << " " << sex << " " << scoreAry[0] << " " << scoreAry[1] << " " << scoreAry[2] << endl;
    }
    file.close();
}

int main()
{
    writeToFile();
    readFromFile();
    return 0;
}