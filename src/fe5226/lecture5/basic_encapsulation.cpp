#include <iostream>
using namespace std;

struct Rectangle
{
    // The prefix m_ is a common naming convention used in C++ to indicate that a variable
    // is a member of a class or struct. This convention helps distinguish member variables
    // from local variables and parameters, making the code easier to read and understand.

    int m_width, m_height; // variables (note the m_)

    // Member declaration inside the class
    // Declares a member function named initialize that takes two integer parameters.
    void initialize(int, int);
    // Member definition inside the class
    int area() { return m_width * m_height; }
};
// Use the method definition to set the values of the member variables.
void Rectangle::initialize(int x, int y)
{
    m_width = x;
    m_height = y;
}
int main()
{
    Rectangle rect;
    rect.initialize(3, 4); // method call: variableName.methodName(parameters)
    cout << "area: " << rect.area() << endl;
    return 0;
}

// Issues with Current Code
// Public Member Variables: The member variables m_width and m_height are public,
// which means they can be accessed and modified directly from outside the class.
// This breaks encapsulation.

// Initialization Method: The initialize method is used to set the values of the
// member variables, but it would be better to use a constructor for this purpose.