#include <iostream>
using namespace std;

int main()
{
    int sy, sx, ty, tx;
    cin >> sy >> sx >> ty >> tx;

    for (int y = 0; y < sy; y++)
    {
        for (int x = 0; x < sx; x++)
        {
            if (y == ty && x == tx)
            {
                cout << "0 ";
                continue;
            }
            else if ((y == ty || x == tx) || (x >= tx - 1 && x <= tx + 1 && y >= ty - 1 && y <= ty + 1))
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}