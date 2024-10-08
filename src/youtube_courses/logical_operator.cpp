#include <iostream>

#include <iostream>

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;

    // Logical AND (&&)
    if (a < b && b < c)
    {
        std::cout << "Both conditions are true: a < b and b < c" << std::endl;
    }

    // Logical OR (||)
    if (a > b || b < c)
    {
        std::cout << "At least one condition is true: a > b or b < c" << std::endl;
    }

    // Logical NOT (!)
    if (!(a > b))
    {
        std::cout << "The condition a > b is false" << std::endl;
    }

    return 0;
}