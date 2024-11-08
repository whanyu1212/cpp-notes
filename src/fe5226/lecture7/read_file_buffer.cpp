#include <iostream>
#include <fstream>

int main()
{
    const size_t bufferSize = 1024; // Defines buffer size constant (1KB)
    char buffer[bufferSize];        // Creates char array to store file data chunks

    std::ifstream in("myfile.txt", std::ios::binary); // Opens file in binary mode
    if (!in)
    { // Checks if file opened successfully
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Main reading loop
    while (in.read(buffer, bufferSize) || in.gcount() > 0)
    {
        // in.read(buffer, bufferSize) - Attempts to read bufferSize bytes
        // Returns true if bufferSize bytes were read
        // || in.gcount() > 0 - Handles case where less than bufferSize bytes remain

        std::streamsize bytesRead = in.gcount(); // Gets actual number of bytes read

        std::cout.write(buffer, bytesRead); // Writes buffer contents to console
        // Only writes the actual bytes read (bytesRead) not full buffer
    }

    in.close(); // Closes the file stream
    return 0;
}