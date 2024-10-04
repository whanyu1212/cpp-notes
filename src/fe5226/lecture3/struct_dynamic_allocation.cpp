#include <iostream>
using namespace std;

struct ComplexNumber
{
    double real;
    double imag;
};

int main()
{
    ComplexNumber *ptr = NULL; // Declare a pointer to a ComplexNumber struct and initialize it to NULL
    ptr = new ComplexNumber;   // Dynamically allocate memory for a ComplexNumber struct and assign the address of the allocated memory to ptr
    // Don't need & because ComplexNumber is a pointer and not an existing variable
    ptr->real = 1.0; // Access the real member of the ComplexNumber struct using the pointer
    ptr->imag = 2.0; // Access the imag member of the ComplexNumber struct using the pointer

    cout << "Real part of the complex number: " << ptr->real << endl;
    cout << "Imaginary part of the complex number: " << ptr->imag << endl;

    return 0;
}