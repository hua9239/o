#include <iostream>
using namespace std;

int n;

void guessNumber(int ans, int num[])
{
    int ansArr[4];
    for (int i = 0; i < 4; i++)
    {
        ansArr[i] = ans % 10;
        ans /= 10;
    }

    for (int i = 0; i < n; i++)
    {
        int A = 0, B = 0;

        int numArr[4];
        for (int j = 0; j < 4; j++)
        {
            numArr[j] = num[i] % 10;
            num[i] /= 10;
        }

        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (numArr[j] == ansArr[k])
                {
                    if (j == k)
                    {
                        A++;
                    }
                    else
                    {
                        B++;
                    }
                }
            }
        }

        cout << A << "A" << B << "B" << endl;
    }
}

int main()
{
    int ans, num[100];
    cin >> ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    guessNumber(ans, num);
}