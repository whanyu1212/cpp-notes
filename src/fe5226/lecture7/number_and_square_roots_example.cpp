#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

int main()
{
    std::ofstream outFile("SquareRoots.txt");

    if (!outFile)
    {
        std::cerr << "Failed to create file." << std::endl;
        return 1;
    }

    // Set precision for floating point numbers
    outFile << std::fixed << std::setprecision(4);

    // Write header
    outFile << "Number\tSquare Root\n";
    outFile << "-------------------\n";

    // Write numbers and their square roots
    for (int i = 1; i <= 100; ++i)
    {
        // \t is a tab character that creates a space between the two columns
        outFile << i << "\t" << std::sqrt(i) << "\n";
    }

    outFile.close();
    return 0;
}