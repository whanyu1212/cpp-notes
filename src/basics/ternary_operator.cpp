#include <iostream>

int main()
{
    int grade;

    std::cout << "What is the grade obtained?" << std::endl;
    std::cin >> grade;
    grade >= 60 ? std::cout << "Congrats! You passed!" : std::cout << "You failed :(";

    return 0;
}