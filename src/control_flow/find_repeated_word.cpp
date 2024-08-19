#include <iostream>
#include <string>

/// @brief entry point of the program
/// Initialize 2 strings, previous and current, to empty strings.
/// Read a stream of words from the standard input.
/// Check if the current word is the same as the previous word.
/// @return 0
int main()
{
    std::string previous; // previous word; initialized to ""
    std::string current;  // current word
    while (std::cin >> current)
    {                            // read a stream of words
        if (previous == current) // check if the word is the same as last
            std::cout << "repeated word: " << current << '\n';
        previous = current;
    }
    return 0;
}