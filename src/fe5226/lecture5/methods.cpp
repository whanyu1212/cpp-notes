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
    // By setting the methods to const, we are telling the compiler that these methods
    // do not modify the object's state
    double getX() const { return m_x; }
    double getY() const { return m_y; }

    void set(double x, double y)
    {
        m_x = x;
        m_y = y;
    } // set new coordinates
};

// constant reference to the position object
// this is a read-only reference

void print(const char *name, const Position &p)
{
    // getX and getY are public and const methods, so they can be accessed from here
    cout << name << "(" << p.getX() << "," << p.getY() << ")" << endl;
}

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
    Position pos(3.0, 4.0);
    print("Position", pos);
    return 0;
}