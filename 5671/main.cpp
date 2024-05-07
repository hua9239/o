#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

template <class T>
vector<vector<T>> transpose(vector<vector<T>> &matrix)
{
    vector<vector<T>> transposed(matrix[0].size(), vector<T>(matrix.size()));
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

template <class T>
void printMatrix(vector<vector<T>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template <class T>
void sumAround(vector<vector<T>> &matrix, int x, int y)
{
    T sum = 0;
    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if (i >= 0 && i < matrix.size() && j >= 0 && j < matrix[i].size())
            {
                sum += matrix[i][j];
            }
        }
    }
    sum -= matrix[x][y];
    cout << fixed << setprecision(1);
    cout << "(" << x << ", " << y << ") -> " << sum << endl;
}

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> matrix1(row, vector<int>(col));
    vector<vector<double>> matrix2(row, vector<double>(col));
    vector<vector<char>> matrix3(row, vector<char>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix3[i][j];
        }
    }

    cout << "===== [ Matrix 1 ] =====" << endl;
    cout << "Original matrix:" << endl;
    printMatrix(matrix1);
    cout << "Transposed matrix:" << endl;
    vector<vector<int>> transposed1 = transpose(matrix1);
    printMatrix(transposed1);
    cout << "Sum of the surrounding element:" << endl;
    sumAround(transposed1, 0, 0);
    sumAround(transposed1, 1, 1);
    sumAround(transposed1, 2, 2);

    cout << "===== [ Matrix 2 ] =====" << endl;
    cout << "Original matrix:" << endl;
    printMatrix(matrix2);
    cout << "Transposed matrix:" << endl;
    vector<vector<double>> transposed2 = transpose(matrix2);
    printMatrix(transposed2);
    cout << "Sum of the surrounding element:" << endl;
    sumAround(transposed2, 0, 0);
    sumAround(transposed2, 1, 1);
    sumAround(transposed2, 2, 2);

    cout << "===== [ Matrix 3 ] =====" << endl;
    cout << "Original matrix:" << endl;
    printMatrix(matrix3);
    cout << "Transposed matrix:" << endl;
    vector<vector<char>> transposed3 = transpose(matrix3);
    printMatrix(transposed3);

    return 0;
}