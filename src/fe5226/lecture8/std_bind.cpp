#include <iostream>
#include <functional>
using namespace std::placeholders; // adds visibility of _1, _2, _3,...
double f(double a, double b, double c, double x) { return (a * x + b) * x + c; }
int main()
{
    // Here std::bind creates a function object based on a function
    // of 4 arguments and binds the 1st, 2nd and 3rd argument to specific values
    // The final result g is a function object of just one variable
    // We use auto for the type of g as it is very complicated
    auto g = std::bind(&f, 1.0, -2.0, 1.0, _1);
    std::cout << g(2.5) << '\n'; // 2.25
    return 0;
}