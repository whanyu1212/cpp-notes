#include <iostream>
using namespace std;

// A&B is true if both A and B are true
// A|B is true if either A or B is true
// A^B (bitwise xor) is true if either A or B is true, but not both

int main()
{
    bool x = 10 > 5; // This is true
    bool y = 10 < 5; // This is false

    cout << "x && y: " << (x && y) << "\n";     // false
    cout << "x || y: " << (x || y) << "\n";     // true
    cout << "!(x && y): " << !(x && y) << "\n"; // true
    cout << "x ^ y: " << (x ^ y) << "\n";       // true

    return 0;
}