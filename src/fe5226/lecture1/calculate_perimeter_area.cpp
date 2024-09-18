#include <iostream>

int main()
{
    // In modern C++ programming, it is generally considered good practice
    // to declare and initialize variables as close as possible to their first use.
    // This approach improves code readability and maintainability by keeping the
    // scope of variables limited to where they are actually needed.
    std::cout << "Enter the length of the rectangle: ";
    int length;
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    int width;
    std::cin >> width;

    int perimeter = 2 * (length + width);
    std::cout << "The perimeter of the rectangle is: " << perimeter << std::endl;

    int area = length * width;
    std::cout << "The area of the rectangle is: " << area << std::endl;
}