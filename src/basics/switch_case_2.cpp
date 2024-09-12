#include <iostream>

/**
 * @brief Entry point of the program.
 *
 * This program prompts the user to enter a day of the week (1 for Monday, 2 for Tuesday, ..., 7 for Sunday)
 * and provides feedback on whether the entered day is a weekday or the weekend using a switch-case statement.
 *
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    int day;

    std::cout << "Enter a day of the week (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ";
    std::cin >> day;

    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        std::cout << "It's a weekday." << std::endl;
        break;
    case 6:
    case 7:
        std::cout << "It's the weekend!" << std::endl;
        break;
    default:
        std::cout << "Invalid day entered. Please enter a number between 1 and 7." << std::endl;
        break;
    }

    return 0;
}