#include <iostream>

// It doesnt allow you to modify the value that v points to
double norm1(const double *v, unsigned int n)
{
    // by default , v always points to the first element of the array
    double s = 0;
    for (unsigned int i = 0; i < n; ++i)
        s += std::abs(v[i]); // we call abs
    // it is equivalent to s += std::abs(*(v + i));
    return s;
}

int main()
{
    double v[5] = {1, 2, 3, 4, 5};
    // v points to 1 at first, so to get the value of v[1], we can do *(v + 1)
    std::cout << "L1 norm of v: " << norm1(v, 5) << std::endl;
    return 0;
}