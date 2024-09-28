#include <iostream>

int main()
{
    int x, digit, sum = 0;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> x;

    while (x > 0)
    {
        digit = x % 10; // Extract the last digit
        sum += digit;   // Add the digit to the sum
        x /= 10;        // Remove the last digit from the number
    }

    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}