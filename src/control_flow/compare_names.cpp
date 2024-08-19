#include <iostream>
#include <string>

/**
 * @brief Compares two strings and prints the result.
 *
 * This function compares two strings and prints whether they are the same,
 * or which one is alphabetically before or after the other.
 *
 * @param first The first string to compare.
 * @param second The second string to compare.
 */
void compare_strings(const std::string &first, const std::string &second)
{
    if (first == second)
    {
        std::cout << "that's the same name twice\n";
    }
    else if (first < second)
    {
        std::cout << first << " is alphabetically before " << second << '\n';
    }
    else
    { // if (first > second)
        std::cout << first << " is alphabetically after " << second << '\n';
    }
}

int main()
{
    std::cout << "Please enter two names\n";
    std::string first;
    std::string second;
    std::cin >> first >> second; // read two strings

    compare_strings(first, second); // Call the compare_strings function

    return 0; // Explicitly return 0
}