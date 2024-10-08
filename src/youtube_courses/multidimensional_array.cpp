#include <iostream>

int main()
{
    std::string cars[3][3] = {
        {"Toyota", "Honda", "Nissan"},
        {"Ford", "Chevrolet", "Dodge"},
        {"BMW", "Mercedes", "Audi"}};

    // Calculate the number of rows and columns
    // Total size of array / size of 1 row
    int rows = sizeof(cars) / sizeof(cars[0]);
    // Size of 1 row / size of 1 element in the row
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << "Car at index [" << i << "][" << j << "]: " << cars[i][j] << std::endl;
        }
    }

    return 0;
}