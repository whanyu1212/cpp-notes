#include <iostream>
#include <cstdlib> // for calling the rand() function
#include <ctime>   // for setting the seed of the random number generator

void RandVector(int n, double *result, double a, double b)
{
    srand(time(0));        // Seed the random number generator
    double max = RAND_MAX; // maximum value of the random number generator
    for (int i = 0; i < n; ++i)
    {
        // rand() generates a random number between 0 and RAND_MAX
        // dividing by max scales the random number to be between 0 and 1
        // a + (b - a) * rand() / max scales the random number to be between a and b
        result[i] = a + (b - a) * rand() / max;
        // alternatively, *(result + i) = a + (b - a) * rand() / max;
    }
}