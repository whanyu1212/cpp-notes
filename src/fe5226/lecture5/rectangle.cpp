#include <iostream>
#include <cmath> // Need to include cmath for the std::abs() function

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

class Rectangle
{
private:
    // Declares private member variables topLeft and bottomRight of type Position
    Position topLeft;
    Position bottomRight;

public:
    // Constructor using two Position objects
    Rectangle(const Position &topL, const Position &bottomR) : topLeft(topL), bottomRight(bottomR) {}

    // Constructor using four doubles for coordinates
    // The coordinates will be used to create two Position objects
    Rectangle(double topLX, double topLY, double bottomRX, double bottomRY) : topLeft(topLX, topLY), bottomRight(bottomRX, bottomRY) {}

    // Method to calculate width
    double width() const
    {
        return std::abs(bottomRight.getX() - topLeft.getX());
    }

    // Method to calculate height
    double height() const
    {
        return std::abs(topLeft.getY() - bottomRight.getY());
    }

    // Method to calculate perimeter
    double perimeter() const
    {
        return 2 * (width() + height());
    }

    // Method to calculate area
    double area() const
    {
        return width() * height();
    }

    // Method to shift the rectangle
    void shift(double xShift, double yShift)
    {
        topLeft.set(topLeft.getX() + xShift, topLeft.getY() + yShift);
        bottomRight.set(bottomRight.getX() + xShift, bottomRight.getY() + yShift);
    }
};

int main()
{
    // Create a rectangle using two Position objects
    Rectangle rect(Position(2, 2), Position(5, 5));
    std::cout << "Width: " << rect.width() << std::endl;
    std::cout << "Height: " << rect.height() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;

    // Shift the rectangle
    rect.shift(1, 1);
    std::cout << "Width: " << rect.width() << std::endl;
    std::cout << "Height: " << rect.height() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;

    // Create a rectangle using four doubles
    Rectangle rect2(2, 2, 5, 5);
    std::cout << "Width: " << rect2.width() << std::endl;
    std::cout << "Height: " << rect2.height() << std::endl;
    std::cout << "Perimeter: " << rect2.perimeter() << std::endl;
    std::cout << "Area: " << rect2.area() << std::endl;

    // Shift the rectangle
    rect2.shift(1, 1);
    std::cout << "Width: " << rect2.width() << std::endl;
    std::cout << "Height: " << rect2.height() << std::endl;
    std::cout << "Perimeter: " << rect2.perimeter() << std::endl;
    std::cout << "Area: " << rect2.area() << std::endl;

    return 0;
}