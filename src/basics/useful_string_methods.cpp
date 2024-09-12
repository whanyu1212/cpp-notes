#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "Enter a line: ";
    std::getline(std::cin, input);

    if (input.length() > 0)
    {
        input.append(" - this is the end of the line.");
        std::cout << "You entered: " << input << std::endl;
        std::cout << "The length of the line is: " << input.length() << std::endl;
        std::cout << "The first character is: " << input.at(0) << std::endl;
        std::cout << "The last character is: " << input.at(input.length() - 1) << std::endl;
        std::cout << "The substring from index 3 to 7 is: " << input.substr(3, 5) << std::endl;
        input.erase(3, 7);
        std::cout << "After erasing the substring from index 3 to 7: " << input << std::endl;
    }
    else
    {
        std::cout << "You did not enter anything." << std::endl;
    }
    return 0;
}