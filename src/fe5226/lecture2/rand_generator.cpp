#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const int totalNumbers = 1000000;
    const int lowerBound = 500;
    const int upperBound = 1000;
    const int divisor = 163;

    int count = 0;
    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < totalNumbers; ++i)
    {
        int randomNumber = rand(); // if normalize, use rand() / RAND_MAX
        if (randomNumber >= lowerBound && randomNumber <= upperBound && randomNumber % divisor == 0)
        {
            count++;
        }
    }

    std::cout << "Number of random numbers in the range [500, 1000] and divisible by 163: " << count << std::endl;

    return 0;
}

// alternative
// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// int main()
// {
//     const int totalNumbers = 1000000;
//     const int lowerBound = 500;
//     const int upperBound = 1000;
//     const int divisor = 163;

//     int randomNumbers[totalNumbers];
//     int count = 0;

//     srand(time(0));

//     // Generate the array of random numbers
//     for (int i = 0; i < totalNumbers; ++i)
//     {
//         randomNumbers[i] = rand();
//     }

//     // Loop through the array and check conditions
//     for (int i = 0; i < totalNumbers; ++i)
//     {
//         if (randomNumbers[i] >= lowerBound && randomNumbers[i] <= upperBound && randomNumbers[i] % divisor == 0)
//         {
//             count++;
//         }
//     }

//     std::cout << "Number of random numbers in the range [500, 1000] and divisible by 163: " << count << std::endl;

//     return 0;
// }