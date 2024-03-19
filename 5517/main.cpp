#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
    double width, height;

public:
    void setRectangle(double w, double h)
    {
        width = w;
        height = h;
    }
    double getArea()
    {
        return width * height;
    }
    double getPerimeter()
    {
        return 2 * (width + height);
    }
};

int main()
{
    Rectangle rectangle1;
    Rectangle rectangle2;

    double w, h;
    cin >> w >> h;
    rectangle1.setRectangle(w, h);
    cin >> w >> h;
    rectangle2.setRectangle(w, h);

    cout << fixed << setprecision(2) << rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
    cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

    rectangle2.setRectangle(5.0, 2.5);

    cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;
}