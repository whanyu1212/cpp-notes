#include <iostream>
using namespace std;

// *&x means x

int main()
{
    char y = 65;       // ASCII value of 'A'
    uint16_t x = 6183; // 16-bit unsigned integer, approximately 2 bytes

    char *py = &y; // * dereferences the pointer, giving the value stored at the memory address
    uint16_t *px = &x;

    cout << "Address of x: " << px << endl;
    cout << "Address of y: " << (void *)py << endl; // (void *) is a type cast to void pointer,
    // ensuring that the address of y is printed as a memory address
    cout << "Value of y: " << *py << endl;
    cout << "Value of x: " << *px << endl;

    return 0;
}