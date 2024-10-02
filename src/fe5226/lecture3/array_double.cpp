#include <iostream>
#include <cmath>
#include <cstdlib> // rand()
#include <ctime>   // seed the random number generator
using namespace std;

int main()
{
    double A[100];
    for (int i = 0; i < 100; i++)
    {
        A[i] = rand();
        // /RAND_MAX is used to normalize the random number to be between 0 and 1
    }

    double minValue = A[0];
    double maxValue = A[0];
    double sum = 0;

    for (int i = 0; i < 100; i++)
    {
        if (A[i] < minValue)
        {
            minValue = A[i];
        }
        if (A[i] > maxValue)
        {
            maxValue = A[i];
        }
        sum += A[i];
    }

    double meanValue = sum / 100;
    cout << "Min value: " << minValue << endl;
    cout << "Max value: " << maxValue << endl;
    cout << "Mean value: " << meanValue << endl;

    return 0;
}