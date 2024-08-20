#include <iostream>

/**
 * @brief Entry point of the program.
 *
 * This program prompts the user to enter a grade (A, B, C, D, or F) and
 * provides feedback based on the entered grade using a switch-case statement.
 *
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    char grade;

    std::cout << "Enter your grade (A, B, C, D, or F): ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Excellent! Keep up the good work." << std::endl;
        break;
    case 'B':
        std::cout << "Good job! You're doing well." << std::endl;
        break;
    case 'C':
        std::cout << "Fair. There's room for improvement." << std::endl;
        break;
    case 'D':
        std::cout << "Poor. You need to work harder." << std::endl;
        break;
    case 'F':
        std::cout << "Failing. Consider seeking help." << std::endl;
        break;
    default:
        std::cout << "Invalid grade entered. Please enter A, B, C, D, or F." << std::endl;
        break;
    }

    return 0;
}