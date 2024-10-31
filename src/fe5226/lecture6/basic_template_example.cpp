#include <iostream>

/*
Instead of defining the same function over and over again,
we can use template functions to simplify things

int cube(int x) { return x * x * x; }
float cube(float x) { return x * x * x; }
double cube(double x) { return x * x * x; }

*/

/*
By declare a generic type as placeholder,
we only have to define the function once
*/
template <typename MyType>
MyType cubic(MyType x)
{
    return x * x * x;
    // return pow(x, 3);
}

int main()
{
    int x = 3;
    int result = cubic(x);

    std::cout << "The cubic of " << x << " is " << result << std::endl;
}