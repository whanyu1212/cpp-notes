#include <iostream>
using namespace std;

struct ComplexNumber
{
    double real;
    double imag;
};

int main()
{
    ComplexNumber z1;
    z1.real = 1.0;
    z1.imag = 2.0;

    ComplexNumber z2;
    z2.real = 3.0;
    z2.imag = 4.0;

    ComplexNumber sum;
    sum.real = z1.real + z2.real;
    sum.imag = z1.imag + z2.imag;

    cout << "Sum of the complex numbers: " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}