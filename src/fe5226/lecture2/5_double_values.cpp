#include <iostream>
#include <cmath>

int main()
{
    const int numValues = 5;
    double product = 1.0;
    double input;

    std::cout << "Enter 5 double values:\n";

    for (int i = 0; i < numValues; ++i)
    {
        std::cin >> input;

        product *= input;

        if (std::abs(product) > 1e10)
        {
            std::cout << "Error: Product exceeded limit!" << std::endl;
            break;
        }
    }

    // No need for the final 'if' check here

    std::cout << "Product of the entered numbers: " << product << std::endl;

    return 0;
}