#include <iostream>
#include <string>
int main()
{
    int number_of_words = 0;
    std::string previous; // previous word; initialized to ""
    std::string current;
    while (std::cin >> current)
    {
        ++number_of_words; // increase word count
        if (previous == current)
            std::cout << "word number " << number_of_words << " repeated: " << current << '\n';
        previous = current;
    }
    return 0;
}