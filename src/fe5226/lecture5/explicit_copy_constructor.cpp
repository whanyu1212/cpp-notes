struct Position
{
    double m_x, m_y;

    // Position(const Position &p): This is the copy constructor. It takes a constant reference to another Position object p.
    // Initializer List:
    // m_x(p.m_x): Initializes the member variable m_x with the value of p.m_x.
    // m_y(p.m_y): Initializes the member variable m_y with the value of p.m_y.
    // Body: The body of the constructor is empty because all the initialization is done in the initializer list.

    Position(const Position &p) // copy constructor
        : m_x(p.m_x)            // copies p.m_x to m_x
          ,
          m_y(p.m_y) // copies p.m_y to m_y
    {
    }
    // Parameterized constructor
    Position(double x, double y)
        : m_x(x), m_y(y)
    {
    }
};