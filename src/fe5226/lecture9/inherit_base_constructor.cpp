#include <iostream>
using namespace std;

struct A
{
    A() : m_x(0) {}      // Default constructor
    A(int x) : m_x(x) {} // Parameterized constructor
    int m_x;             // Member variable
};
struct B : A // B inherits from A
{
    // Constructor 1: Default
    B() {}
    // Implicitly calls A's default constructor
    // m_y is not initialized!

    // Constructor 2: One parameter
    B(int y) : m_y(y) {}
    // Implicitly calls A's default constructor
    // Only initializes m_y

    // Constructor 3: Two parameters
    B(int x, int y) : A(x), m_y(y) {}
    // Explicitly calls A(x)
    // Initializes both m_x and m_y
    int m_y;
};
