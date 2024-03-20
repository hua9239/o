#include "Matrix.h"

Matrix::Matrix()
{
    data = vector<vector<int>>(3, vector<int>(3, 0));
}
void Matrix::setElement(int row, int col, int value)
{
    data[row][col] = value;
}
int Matrix::getElement(int row, int col) const
{
    return data[row][col];
}
Matrix Matrix::add(const Matrix &m) const
{
    Matrix result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result.setElement(i, j, data[i][j] + m.getElement(i, j));
        }
    }
    return result;
}
Matrix Matrix::minus(const Matrix &m) const
{
    Matrix result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result.setElement(i, j, data[i][j] - m.getElement(i, j));
        }
    }
    return result;
}
Matrix Matrix::multiply(const Matrix &m) const
{
    Matrix result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += data[i][k] * m.getElement(k, j);
            }
            result.setElement(i, j, sum);
        }
    }
    return result;
}
void Matrix::print() const
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}