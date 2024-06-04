#include <iostream>
#include <fstream>
#include <cstring>
#include "Teacher.h"
using namespace std;

void writeToFile(Teacher t[], int n)
{
    ofstream file;
    file.open("Teacher.bin", ios::out | ios::binary);

    for (int i = 0; i < n; i++)
    {
        file.write((char *)&t[i], sizeof(Teacher));
    }

    file.close();
}

void readFromFile(Teacher t[], int n)
{
    ifstream file;
    file.open("Teacher.bin", ios::in | ios::binary);

    for (int i = 0; i < n; i++)
    {
        file.read((char *)&t[i], sizeof(Teacher));
    }

    file.close();
}

void printTeacher(Teacher t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        t[i].print();
    }
}

int main()
{
    const int n = 4;

    Teacher t[n];

    char name[20];
    int age;
    double score;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> age >> score;
        t[i] = Teacher(name, age, score);
    }

    writeToFile(t, n);

    Teacher t2[n];
    readFromFile(t2, n);

    printTeacher(t2, n);
}