#include <iostream>
// #include <ctime>

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 6
    // We want to imitate the behavior of a 6-sided die
    int random_number = rand() % 6 + 1;

    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}