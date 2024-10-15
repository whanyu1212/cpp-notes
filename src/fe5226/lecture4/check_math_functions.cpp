#include <iostream>
#include <cmath>
using namespace std;

// make use of function pointers and structs to solve this problem

struct Identity
{
    // a pointer named lhs that points to a function that takes a double and returns a double
    double (*lhs)(double);
    // a pointer named rhs that points to a function that takes a double and returns a double
    double (*rhs)(double);
    // a pointer named description that points to a string
    const char *description;
};

// Define the LHS and RHS expressions as functions
double lhs1(double x) { return 2 * pow(cos(x), 2) - 1; }
double rhs1(double x) { return cos(2 * x); }

double lhs2(double x) { return pow(sin(x), 4) + 2 * pow(cos(x), 2) - 2 * pow(sin(x), 2) - cos(2 * x); }
double rhs2(double x) { return pow(cos(x), 4); }

double lhs3(double x) { return 4 * pow(cos(x), 3) - 3 * cos(x); }
double rhs3(double x) { return cos(3 * x); }

// constant reference to the struct Identity
bool evaluate_identity(const Identity &identity, double x)
{
    double lhs_value = identity.lhs(x);
    double rhs_value = identity.rhs(x);
    cout << identity.description << " is ";
    if (abs(lhs_value - rhs_value) < 1e-6) // epsilon is 1e-6
    {
        cout << "correct" << endl;
    }
    else
    {
        cout << "incorrect" << endl;
    }
    return true;
}

int main()
{
    double x;
    cout << "Enter a value for x: ";
    cin >> x;

    // Define the identities
    Identity identities[] = {
        {lhs1, rhs1, "Identity 1: 2(cos(x))^2 - 1 = cos(2x)"},
        {lhs2, rhs2, "Identity 2: (sin(x))^4 + 2(cos(x))^2 - 2(sin(x))^2 - cos(2x) = (cos(x))^4"},
        {lhs3, rhs3, "Identity 3: 4(cos(x))^3 - 3cos(x) = cos(3x)"}};

    for (const Identity &identity : identities)
    {
        evaluate_identity(identity, x);
    }

    return 0;
}