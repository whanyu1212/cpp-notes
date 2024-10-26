#include <iostream>
using namespace std;

class Position
{
    // anything defined here is private
    // members m_x and m_y are declared as private
    // they can only by used inside the methods of this struct
    // m_x and m_y are considered variables of the struct Position
    double m_x, m_y;

public:
    // Default constructor, if no arguments are passed, the default values are 0
    Position() : m_x(0), m_y(0) {}
    // Parameterized constructor
    Position(double x, double y) : m_x(x), m_y(y) {}

    // Accessor or Getter methods (make sure they are public)
    double getX() { return m_x; } // read only public accessor
    double getY() { return m_y; } // read only public accessor

    void set(double x, double y)
    {
        m_x = x;
        m_y = y;
    } // set new coordinates
};

/*
Encapsulation:

Data Protection: By making member variables private and providing public accessor methods,
you protect the internal state of the object from unauthorized access and modification.
Controlled Access: Accessor methods allow you to control how the internal state of the
object is accessed and modified. This ensures that the object remains in a valid state.

Read-Only Access:

Getter Methods: Getter methods provide read-only access to private member variables.
This means that external code can read the value of a member variable without being able
to modify it.
*/

int main()
{
    Position p1;    // p1 is an object of the struct Position
    p1.set(10, 20); // set the coordinates of p1 to (10, 20)

    // Access the coordinates of p1 using the accessor methods
    std::cout << "Position p1: (" << p1.getX() << ", " << p1.getY() << ")\n";

    Position p2(15, 25); // p2 is an object of the struct Position with coordinates (15, 25)

    // Access the coordinates of p2 using the accessor methods
    std::cout << "Position p2: (" << p2.getX() << ", " << p2.getY() << ")\n";

    return 0;
}