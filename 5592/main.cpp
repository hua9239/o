#include <iostream>
#include <iomanip>
#include <string>
#include "Student.h"
using namespace std;

void printAve(Student stuArray[])
{
    double mathAverage = 0, englishAverage = 0, computerAverage = 0;
    for (int i = 0; i < Student::getNumOfStu(); i++)
    {
        mathAverage += stuArray[i].getCourse().getMath();
        englishAverage += stuArray[i].getCourse().getEnglish();
        computerAverage += stuArray[i].getCourse().getComputer();
    }

    mathAverage /= Student::getNumOfStu();
    englishAverage /= Student::getNumOfStu();
    computerAverage /= Student::getNumOfStu();

    cout << "mathAverage:" << fixed << setprecision(1) << mathAverage << endl;
    cout << "englishAverage:" << fixed << setprecision(1) << englishAverage << endl;
    cout << "computerAverage:" << fixed << setprecision(1) << computerAverage << endl;
}

int main()
{

    int n;
    cin >> n;
    Student stuArray[n];
    for (int i = 0; i < Student::getNumOfStu(); i++)
    {
        string name, ID;
        int m, e, c;
        cin >> name >> ID >> m >> e >> c;
        stuArray[i].setName(name);
        stuArray[i].setID(ID);
        (*stuArray[i].setCourse()).setMath(m);
        (*stuArray[i].setCourse()).setEnglish(e);
        (*stuArray[i].setCourse()).setComputer(c);
    }

    for (int i = 0; i < Student::getNumOfStu(); i++)
    {
        stuArray[i].printStudent();
    }

    printAve(stuArray);
}