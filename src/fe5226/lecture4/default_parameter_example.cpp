#include <iostream>
#include <iomanip> //for string formatting

using namespace std;

void printDouble(double d, int width = 10, int precision = 2)
{
    cout << fixed << setw(width) << setprecision(precision) << d << endl;
}

int main()
{
    printDouble(3.14159);        // default width and precision
    printDouble(3.14159, 15);    // custom width, default precision
    printDouble(3.14159, 15, 5); // custom width and precision
    return 0;
}