struct Position
{
    double m_x, m_y;
    Position()   // default constructor
        : m_x(0) // set m_x to zero
          ,
          m_y(0) // set m_y to zero
    {
    }
    Position(double x, double y)
        : m_x(x), m_y(y)
    {
    }
};