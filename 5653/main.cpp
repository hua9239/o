#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{

    Triangle *triangles[4];
    triangles[0] = new Triangle();
    triangles[1] = new Triangle();
    triangles[2] = new Triangle();
    triangles[3] = new Triangle();

    for (int i = 0; i < 4; i++)
    {
        int base, height;
        cin >> base >> height;
        triangles[i]->setBase(base);
        triangles[i]->setHeight(height);
        triangles[i]->print();
    }

    cout << "Total: " << Triangle::getNumOfTriangles() << " Triangles" << endl;

    delete triangles[1];
    triangles[1] = nullptr;
    delete triangles[3];
    triangles[3] = nullptr;

    cout << "Total: " << Triangle::getNumOfTriangles() << " Triangles" << endl;

    return 0;
}