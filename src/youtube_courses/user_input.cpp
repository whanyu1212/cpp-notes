#include <iostream>

int main()
{
    // cin is used to get input from the user
    // cout is used to display output to the user
    std::string name;
    std::cout << "what is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}