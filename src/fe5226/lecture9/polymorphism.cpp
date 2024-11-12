/*
It allows to specialise an expected behaviour for different
objects and later refer to it with no knowledge of the
specific type of the object referred to
*/
#include <iostream>
using namespace std;
// shape is an abstract class and cannot be instantiated
struct Shape
{
    // constant member function
    virtual double perimeter() const = 0; // pure virtual method
};
struct Circle : Shape
{
    double radius;
    Circle(double r) : radius(r) {}
    // constante member function
    virtual double perimeter() const { return 2 * 3.14 * radius; }
};
struct Square : Shape
{
    double side;
    Square(double l) : side(l) {}
    // constant member function
    virtual double perimeter() const { return 4 * side; }
};

int main()
{
    Circle c(3);
    Square s(4);
    cout << "Circle perimeter: " << c.perimeter() << endl;
    cout << "Square perimeter: " << s.perimeter() << endl;
    return 0;
}