#include <iostream>
using namespace std;

int main()
{
    char y = 65;       // ASCII value of 'A'
    uint16_t x = 6183; // 16-bit unsigned integer, approximately 2 bytes

    cout << "Address of x: " << &x << endl;
    cout << "Address of y: " << (void *)&y << endl; // (void *) is a type cast to void pointer,
    // ensuring that the address of y is printed as a memory address

    return 0;
}