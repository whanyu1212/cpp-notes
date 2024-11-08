#include <iostream>
#include <fstream>

int main()
{
    // Create array of doubles
    double numbers[] = {1.0, 2.0, 3.0, 4.0};
    const size_t count = sizeof(numbers) / sizeof(numbers[0]);

    // Open binary file for writing
    std::ofstream outFile("myfile.bin", std::ios::binary);
    if (!outFile)
    {
        std::cerr << "Failed to create file" << std::endl;
        return 1;
    }

    // Write array to file
    // converts double array pointer to char pointer because write() expects char pointer
    outFile.write(reinterpret_cast<const char *>(numbers), count * sizeof(double)); // total bytes to write

    outFile.close();
    return 0;
}