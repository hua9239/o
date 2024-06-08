#include <iostream>
#include <fstream>
#include "Course.h"
#include "Student.h"
using namespace std;

void initializeStudents(Student *stu, int n);
void saveStudentsData(Student *stu, int n);
void loadStudentsData(Student *stu, int n);
void dumpStudents(Student *stu, int n);
void printAve(Student *stu);

int main()
{
    int n;
    cin >> n;

    // debug
    // cout << "|info|\tn:" << n << endl;

    Student *stu = new Student[n];

    initializeStudents(stu, n);
    saveStudentsData(stu, n);

    delete[] stu;
    stu = new Student[n];
    loadStudentsData(stu, n);

    dumpStudents(stu, n);
    printAve(stu);
}

void initializeStudents(Student *stu, int n)
{
    for (int i = 0; i < n; i++)
    {
        char name[30], ID[30];
        int math, english, computer;
        cin >> name >> ID >> math >> english >> computer;
        Course course(math, english, computer);
        stu[i] = Student(name, ID, course);
    }
}

void saveStudentsData(Student *stu, int n)
{
    ofstream file("students.dat", ios::binary);

    for (int i = 0; i < n; i++)
    {
        file.write(reinterpret_cast<char *>(&stu[i]), sizeof(Student));
    }
}

void loadStudentsData(Student *stu, int n)
{
    ifstream file("students.dat", ios::binary);

    for (int i = 0; i < n; i++)
    {
        file.read(reinterpret_cast<char *>(&stu[i]), sizeof(Student));
    }
}

void dumpStudents(Student *stu, int n)
{
    for (int i = 0; i < n; i++)
    {
        stu[i].printStudent();
    }
}

void printAve(Student *stu)
{
    double mathSum = 0, englishSum = 0, computerSum = 0;
    for (int i = 0; i < Student::getNumOfStu(); i++)
    {
        mathSum += stu[i].getCourse().getMath();
        englishSum += stu[i].getCourse().getEnglish();
        computerSum += stu[i].getCourse().getComputer();
    }
    cout << "mathAverage:" << mathSum / Student::getNumOfStu() << endl;
    cout << "englishAverage:" << englishSum / Student::getNumOfStu() << endl;
    cout << "computerAverage:" << computerSum / Student::getNumOfStu() << endl;
}