#include <iostream>
using namespace std;

struct Roots
{
    double r1, r2;
};

struct PolyCoeff
{
    double a, b, c;
};

Roots findRoots(const PolyCoeff &coeff)
{
    double a = coeff.a;
    double b = coeff.b;
    double c = coeff.c;

    double discriminant = b * b - 4 * a * c;
    Roots roots;

    if (discriminant > 0)
    {
        roots.r1 = (-b + sqrt(discriminant)) / (2 * a);
        roots.r2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0)
    {
        roots.r1 = -b / (2 * a);
        roots.r2 = roots.r1;
    }
    else
    {
        roots.r1 = -b / (2 * a);
        roots.r2 = sqrt(-discriminant) / (2 * a);
    }

    return roots;
}