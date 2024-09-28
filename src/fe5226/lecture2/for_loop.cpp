#include <iostream>
using namespace std;

int main()
{
    double sum = 1.0;
    double multiplier = 1.0 / 3.0;
    double factor = multiplier;

    for (int i = 1; i <= 100; i++)
    {
        sum += factor;
        factor *= multiplier;
    }

    cout << "The sum of the first 101 terms of the series:  " << sum << endl;

    return 0;
}