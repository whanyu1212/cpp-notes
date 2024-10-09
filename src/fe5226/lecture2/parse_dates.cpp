#include <iostream>
#include <cmath> // For floor function

int main()
{
    int day, month, year;
    std::cout << "Enter a date in the format of DD MM YYYY: ";
    std::cin >> day >> month >> year;

    int t = std::floor((12 - month) / 10.0);
    int y = year - t;
    int m = month + 12 * t;
    int c = std::floor(y / 100.0);
    int Y = y % 100;

    // Corrected with explicit casts to int, % operator does not work with double
    int w = (day + Y + static_cast<int>(std::floor(Y / 4)) + static_cast<int>(std::floor(c / 4)) - 2 * c + static_cast<int>(std::floor(26 * (m + 1) / 10))) % 7;

    // std::cout << "Day of the week: " << w << std::endl;
    switch (w)
    {
    case 0:
        std::cout << "Sunday" << std::endl;
        break;

    case 1:
        std::cout << "Monday" << std::endl;
        break;

    case 2:
        std::cout << "Tuesday" << std::endl;
        break;

    case 3:
        std::cout << "Wednesday" << std::endl;
        break;

    case 4:
        std::cout << "Thursday" << std::endl;
        break;

    case 5:
        std::cout << "Friday" << std::endl;
        break;

    case 6:
        std::cout << "Saturday" << std::endl;
        break;
    }

    return 0;
}