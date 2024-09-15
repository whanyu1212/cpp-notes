#include <iostream>

int main()
{
    int number;

    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> number;
    } while (number < 1 || number > 9);

    std::cout << "You entered: " << number << std::endl;
}