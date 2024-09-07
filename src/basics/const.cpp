#include <iostream>
using namespace std;

int main()
{
    // const is a keyword in C++ to define constants. Constants are expressions with a fixed value.
    // Constants are immutable, meaning that their value cannot be changed after initialization.
    // They are read-only variables.
    // Constants are uppercase by convention to make them easily distinguishable from variables.
    const double PI = 3.14159;
    double radius = 5.0;
    double area = PI * radius * radius;
    cout << "Area of circle: " << area << endl;
}