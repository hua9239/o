/*
撰寫一個主程式的函式display(GeometricObject &)，
裡面要包含getVolume，getArea，getColor。
此題必須使用抽象(abstract)類別和函數，請使用virtual完成。

輸入說明：
輸入半徑、顏色建立1個Ball物件，
再輸入邊長、顏色建立1個Cube物件

輸出說明：
依照範例輸出，利用display函式分別輸出Ball及Cube的各項資料


範例輸入：
3 red 5 blue

範例輸出：
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue


***提示：「area:113.1, volume:113.1, color:red 」在display完成
*/
#include <iostream>
#include <iomanip>
#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
using namespace std;

void display(GeometricObject &obj)
{
    cout << fixed << setprecision(1);
    cout << ", area:" << obj.getArea() << ", volume:" << obj.getVolume() << ", color:" << obj.getColor() << endl;
}

int main()
{
    double radius, length;
    string color, color2;
    cin >> radius >> color >> length >> color2;
    Ball ball(radius, color);
    Cube cube(length, color2);
    cout << fixed << setprecision(1);
    cout << "Ball" << endl
         << "radius: " << ball.getRadius();
    display(ball);
    cout << "Cube" << endl
         << "length: " << cube.getSide();
    display(cube);
    return 0;
}