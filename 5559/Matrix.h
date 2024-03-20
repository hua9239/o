#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
private:
    vector<vector<int>> data;

public:
    Matrix();
    void setElement(int, int, int);
    int getElement(int, int) const;
    Matrix add(const Matrix &) const;
    Matrix minus(const Matrix &) const;
    Matrix multiply(const Matrix &) const;
    void print() const;
};

#endif