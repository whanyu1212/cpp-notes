#include <iostream>

struct ComplexNumber
{
    double r, i;
};

// we pass the complex numbers by const reference, so we avoid the cost of copying them
// we specify them as const, to make it clear that they will not be modified in the function

ComplexNumber mult(const ComplexNumber &a, const ComplexNumber &b)
{
    ComplexNumber result;
    result.r = a.r * b.r - a.i * b.i;
    result.i = a.r * b.i + a.i * b.r;
    return result;
}

int main()
{
    ComplexNumber x = {1, 2},
                  y = {2, -3},
                  z = mult(x, y);
    std::cout << z.r << "+" << z.i << "i\n";
}
