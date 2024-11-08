#include <iostream>
#include <fstream>
#include <limits>

int main()
{
    std::ifstream in("myfile.txt");
    if (!in)
    {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    int number;
    while (true)
    {
        in >> number;
        if (in.eof()) // end of file
        {
            std::cout << "End of file reached." << std::endl;
            break;
        }
        else if (in.fail()) // failed to read
        {
            std::cout << "Input failed, clearing error state." << std::endl;
            in.clear();
            in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cout << "Read number: " << number << std::endl;
        }
    }

    in.close(); // close the file
    return 0;
}