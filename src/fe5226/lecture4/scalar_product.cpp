#include <iostream>

double scalarProduct(const double *x, double *y, size_t n)
// size_t is an unsigned integer type that is specifically designed to represent sizes or counts in memory
{

    double s = 0.0;
    // implement the loop using pointer arithmetic
    // because we are not using index here, we cannot do x[i] and y[i] or *(x + i) and *(y + i)
    for (const double *end = x + n; x != end;) // loop until x reaches the end and the end = x + n
        s += (*x++) * (*y++);                  // dereference x and y and increment x and y
    return s;
}

int main()
{
    double x[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double y[] = {5.0, 4.0, 3.0, 2.0, 1.0};
    size_t n = sizeof(x) / sizeof(x[0]);
    std::cout << "Scalar product of x and y: " << scalarProduct(x, y, n) << std::endl;
    return 0;
}