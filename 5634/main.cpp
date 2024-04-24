#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
    const int size = 5;
    double height, width;

    cin >> width >> height;
    Rectangle rect1(width, height);
    cin >> width >> height;
    Rectangle rect2(width, height);
    {
        cin >> width >> height;
        Rectangle rect3(width, height);
        cin >> width >> height;
        Rectangle rect4(width, height);
        rect1.print();
        rect2.print();
        rect3.print();
        rect4.print();
        cout << "Step 1 Total: " << Rectangle::getNumOfRect() << " Rectangles" << endl;
    }
    cout << "Step 2 Total: " << Rectangle::getNumOfRect() << " Rectangles" << endl;
}