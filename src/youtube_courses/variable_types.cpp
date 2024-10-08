#include <iostream>

using namespace std;

/**
 * @brief Demonstrates the use of different variable types in C++ and their output.
 *
 * This function initializes variables of types int, float, double, bool, and char.
 * It then prints these variables to the standard output using the insertion operator (<<).
 *
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    int a = 5; // if assign a = 5.5, it will be truncated to 5
    float b = 5.5;
    double c = 5.;
    bool d = true;
    char e = 'A';

    // The << or insertion operator is used to insert the data into the output stream.
    cout << "int a: " << a << endl;
    cout << "float b: " << b << endl;
    cout << "double c: " << c << endl;
    cout << "bool d: " << d << endl;
    cout << "char e: " << e << endl;

    return 0;
}