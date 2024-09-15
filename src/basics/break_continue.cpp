#include <iostream>

int main()
{
    // Example with 'break'
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // Exit the loop entirely when i is 5
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Example with 'continue'
    for (int j = 1; j <= 10; j++)
    {
        if (j % 2 == 0)
        {             // Check if j is even
            continue; // Skip the rest of this iteration and move to the next one
        }
        std::cout << j << " ";
    }
    std::cout << std::endl;

    return 0;
}