#include <iostream>
#include <fstream>
#include <cstring>
#include "Teacher.h"
using namespace std;

void writeToFile(Teacher teacher[], int n)
{
    ofstream file;
    file.open("Teacher.bin", ios::out | ios::binary);

    for (int i = 0; i < n; i++)
    {
        file.write(reinterpret_cast<char *>(&teacher[i]), sizeof(Teacher));
    }

    file.close();
}

void readFromFile(Teacher teacher[], int n)
{
    ifstream file;
    file.open("Teacher.bin", ios::in | ios::binary);

    for (int i = 0; i < n; i++)
    {
        file.read(reinterpret_cast<char *>(&teacher[i]), sizeof(Teacher));
    }

    file.close();
}

void printTeacher(Teacher teacher[], int n)
{
    for (int i = 0; i < n; i++)
    {
        teacher[i].print();
    }
}

int main()
{
    const int n = 4;

    Teacher teacher[n];

    char name[20];
    int age;
    double score;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> age >> score;
        teacher[i] = Teacher(name, age, score);
    }

    writeToFile(teacher, n);

    Teacher t2[n];
    readFromFile(t2, n);

    printTeacher(t2, n);
}