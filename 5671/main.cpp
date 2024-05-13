#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

template <typename T>
vector<vector<T>> transpose(const vector<vector<T>> &matrix)
{
    vector<vector<T>> transposed(matrix[0].size(), vector<T>(matrix.size()));
    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = 0; j < matrix[0].size(); ++j)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

template <typename T>
T sumAround(const vector<vector<T>> matrix, int x, int y)
{
    T sum = 0;
    for (int i = x - 1; i <= x + 1; ++i)
    {
        for (int j = y - 1; j <= y + 1; ++j)
        {
            if (i >= 0 && i < matrix.size() && j >= 0 && j < matrix[0].size())
            {
                sum += matrix[i][j];
            }
        }
    }
    sum -= matrix[x][y];
    return sum;
}

template <typename T>
void printMatrix(const vector<vector<T>> matrix)
{
    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = 0; j < matrix[0].size(); ++j)
        {
            cout << fixed << setprecision(1) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrixInt(rows, vector<int>(cols));
    vector<vector<double>> matrixDouble(rows, vector<double>(cols));
    vector<vector<char>> matrixChar(rows, vector<char>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrixInt[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrixDouble[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrixChar[i][j];
        }
    }

    cout << "===== [ Matrix 1 ] =====" << endl;
    cout << "Original matrix:" << endl;
    printMatrix(matrixInt);

    vector<vector<int>> transposedInt = transpose(matrixInt);
    cout << "Transposed matrix:" << endl;
    printMatrix(transposedInt);

    cout << "Sum of the surrounding element:" << endl;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << "(" << x << ", " << y << ") -> " << sumAround(transposedInt, x, y) << endl;
    }

    cout << "===== [ Matrix 2 ] =====" << endl;
    cout << "Original matrix:" << endl;
    printMatrix(matrixDouble);

    vector<vector<double>> transposedDouble = transpose(matrixDouble);
    cout << "Transposed matrix:" << endl;
    printMatrix(transposedDouble);

    cout << "Sum of the surrounding element:" << endl;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << "(" << x << ", " << y << ") -> " << sumAround(transposedDouble, x, y) << endl;
    }

    cout << "===== [ Matrix 3 ] =====" << endl;
    cout << "Original matrix:" << endl;
    printMatrix(matrixChar);

    vector<vector<char>> transposedChar = transpose(matrixChar);
    cout << "Transposed matrix:" << endl;
    printMatrix(transposedChar);

    return 0;
}