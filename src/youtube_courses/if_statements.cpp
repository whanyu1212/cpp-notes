#include <iostream>

int main()
{
    int age;
    std::cout << "What is your age?" << std::endl;
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Welcome!" << std::endl;
    }
    else if (age < 0)
    {
        std::cout << "You have not been born yet!" << std::endl;
    }
    else
    {
        std::cout << "You are not old enough to enter!" << std::endl;
    }

    return 0;
}