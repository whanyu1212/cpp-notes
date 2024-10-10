#include <iostream>
using namespace std;

double A[3][2] = {{1.2, 2.3}, {2.3, 1.0}, {1.0, 5.0}};
double B[2][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};

double c[3][3];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                c[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}