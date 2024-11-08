#include <fstream>
#include <string>

void appendToFile(const std::string &text)
{
    // instead of overwriting, we append to the file
    // to overwrite, use std::ios::trunc
    std::ofstream file("myfile.txt", std::ios::app);
    if (file.is_open())
    {
        file << text;
        file.close();
    }
}