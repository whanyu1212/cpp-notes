#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double product = 1.0;
    for (int n = 2; n <= 1000; n++)
    {
        product *= (pow(n, 3) - 1) / (pow(n, 3) + 1);
    }

    cout << "The product of the first 999 terms of the series:  " << product << endl;
}