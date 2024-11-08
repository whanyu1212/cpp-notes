#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main()
{
    std::ifstream in("input2.txt");
    if (!in)
    {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    std::string line;
    int NumSum = 0;
    while (std::getline(in, line))
    {
        // Check if line contains only digits
        bool isNumeric = !line.empty() &&
                         std::all_of(line.begin(), line.end(), ::isdigit);

        if (isNumeric)
        {
            NumSum += std::stoi(line);
        }
        else
        {
            continue;
        }
    }

    std::cout << "Sum of numbers: " << NumSum << std::endl;

    in.close();
    return 0;
}

// alternative

// int main() {
//     std::ifstream in("input2.txt");
//     if (!in) {
//         std::cerr << "Failed to open file." << std::endl;
//         return 1;
//     }

//     int number;
//     int NumSum = 0;

//     // Read numbers directly, skipping non-numeric input
//     while (in >> number) {
//         NumSum += number;
//     }

//     // Clear error state (from non-numeric inputs)
//     in.clear();

//     std::cout << "Sum of numbers: " << NumSum << std::endl;

//     in.close();
//     return 0;
// }