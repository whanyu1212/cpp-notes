#include <iostream>
#include <cmath> // Include cmath for sqrt function
using namespace std;

struct Roots
{
    double r1, r2;
    bool hasRealRoots; // Add a field to indicate if there are real roots
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
        roots.hasRealRoots = true;
    }
    else if (discriminant == 0)
    {
        roots.r1 = -b / (2 * a);
        roots.r2 = roots.r1;
        roots.hasRealRoots = true;
    }
    else
    {
        roots.hasRealRoots = false;
    }

    return roots;
}

int main()
{
    PolyCoeff coeff = {1, 2, 5}; // Example coefficients
    Roots roots = findRoots(coeff);

    if (roots.hasRealRoots)
    {
        cout << "Root 1: " << roots.r1 << endl;
        cout << "Root 2: " << roots.r2 << endl;
    }
    else
    {
        cout << "There are no real roots." << endl;
    }

    return 0;
}