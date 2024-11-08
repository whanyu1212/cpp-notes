#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream in("input1.txt");
    if (!in)
    {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    std::string line;
    // getline reads a line from the file and stores it in line
    // handles non-numeric more gracefully
    // simpler error handling
    while (std::getline(in, line))
    {
        std::cout << "Read line: " << line << std::endl;
    }

    in.close();
    return 0;
}