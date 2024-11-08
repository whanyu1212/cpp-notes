#include <fstream> // for file stream
int main()
{
    // declare and open the stream, associated with a file
    std::ofstream f("myfile.txt", std::ios::app); // opens the file in append mode
    // write to the stream (i.e. to the file)
    f << "Hello world\n";
    // close the stream (i.e. the file)
    f.close();
    return 0;
}