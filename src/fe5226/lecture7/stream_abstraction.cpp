#include <iostream>

// Declares a template function that works with any output stream type OS
template <typename OS, typename T>
// p is the pointer to the array of characters, n is the number of elements in the array
void printArray(OS &os, const T *p, unsigned n)
{
    // for this code to work, we need os << p[i] to be defined, i.e.
    // OS& operator<<(OS& os, const T& v) must exist
    for (unsigned i = 0; i < n; ++i)
        os << p[i] << " ";
    os << std::endl;
}
int main()
{
    int x[] = {1, 2, 3, 4};
    // we could use with something other than cout
    // e.g. std::ofstream f("myfile.txt", std::ios::app);
    // e.g., std::ostringstream oss;
    printArray(std::cout, x, 4);
    return 0;
}
