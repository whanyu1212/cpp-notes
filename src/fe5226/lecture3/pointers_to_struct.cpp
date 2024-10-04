#include <iostream>
using namespace std;

struct ComplexNumber
{
    double real;
    double imag;
};

int main()
{
    ComplexNumber x;
    x.real = 1.0;
    x.imag = 2.0;

    ComplexNumber *ptr = &x;
    cout << "Real part of x: " << ptr->real << endl;
    cout << "Imaginary part of x: " << ptr->imag << endl;

    return 0;
}