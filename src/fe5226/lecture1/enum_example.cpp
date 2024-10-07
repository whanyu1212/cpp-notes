// An enum (short for "enumeration") lets you define a type with a fixed set of named values.

#include <iostream>
using namespace std;

int main()
{
    enum Seasons
    {
        Spring, // 0
        Summer, // 1
        Fall,   // 2
        Winter  // 3
    }; // type definition
    Seasons x = Fall;               // variable declaration and initialization
    cout << x << endl;              // print out variable value
    cout << sizeof(Summer) << endl; // print out variable size
}