#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>> &matrix)
{
    vector<vector<int>> temp(matrix[0].size(), vector<int>(matrix.size()));
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            temp[j][i] = matrix[i][j];
        }
    }
    matrix = temp;
}

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int col, row, addCol;
    cin >> col >> row >> addCol;

    vector<vector<int>> matrix(col + addCol, vector<int>(row));

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = col; i < col + addCol; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> matrix[i][j];
        }
    }

    transpose(matrix);
    printMatrix(matrix);
}