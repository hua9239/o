#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double stuAve(vector<double> &stu)
{
    double sum = 0;
    for (int i = 0; i < stu.size(); i++)
    {
        sum += stu[i];
    }
    return sum / stu.size();
}

double courseAve(vector<vector<double>> &score, int course)
{
    double sum = 0;
    for (int i = 0; i < score.size(); i++)
    {
        sum += score[i][course];
    }
    return sum / score.size();
}

int main()
{
    cout << fixed << setprecision(1);
    vector<vector<double>> score =
        {
            {80.0, 70.0, 90.0},
            {85.0, 77.0, 95.0},
            {83.0, 75.0, 70.0},
            {73.0, 95.0, 67.0},
            {88.0, 79.0, 71.0},
        };

    for (int i = 0; i < score.size(); i++)
    {
        for (int j = 0; j < score[i].size(); j++)
        {
            cout << score[i][j] << ", ";
        }
        cout << stuAve(score[i]) << endl;
    }

    cout << "Average: ";
    for (int i = 0; i < score[0].size(); i++)
    {
        cout << courseAve(score, i) << (i == score[0].size() - 1 ? "\n" : ", ");
    }
}