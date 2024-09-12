#include "function_declaration.h"
#include <cmath> // For the sqrt function

/**
 * @brief Computes the square of an integer.
 *
 * @param x The integer to be squared.
 * @return int The square of the input integer.
 */
int square(int x)
{
    return x * x;
}

/**
 * @brief Computes the square root of a double.
 *
 * @param x The double value to compute the square root of.
 * @return double The square root of the input double.
 */
double sqrt(double x)
{
    return std::sqrt(x);
}