#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name, type;

public:
    Person();
    Person(string, string);
    string getName() const;
    string getType() const;
    void print() const;
};

#endif