#include "Matrix.h"

int main()
{
    Matrix m1, m2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp;
            cin >> temp;
            m1.setElement(i, j, temp);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp;
            cin >> temp;
            m2.setElement(i, j, temp);
        }
    }

    cout << "Matrix A:" << endl;
    m1.print();
    cout << "Matrix B:" << endl;
    m2.print();
    cout << "----------" << endl;

    cout << "Added Matrix:" << endl;
    m1.add(m2).print();

    cout << "Minused Matrix:" << endl;
    m1.minus(m2).print();

    cout << "Multiplied Matrix (A*B):" << endl;
    m1.multiply(m2).print();

    cout << "Multiplied Matrix (B*A):" << endl;
    m2.multiply(m1).print();
}
