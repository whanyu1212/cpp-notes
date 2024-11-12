#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Shape
{
    virtual double perimeter() const = 0; // pure virtual method
};

struct Circle : Shape
{
    double radius;
    Circle(double r) : radius(r) {}
    double perimeter() const override { return 2 * 3.14 * radius; }
};

struct Square : Shape
{
    double side;
    Square(double l) : side(l) {}
    double perimeter() const override { return 4 * side; }
};

int main()
{
    // create a vector of 2 pointers to shape and initialize it
    // with a circle and a square
    Shape *s[2] = {new Square(3), new Circle(2)};
    // vector<Shape*> shapes = {new Square(3), new Circle(2)};

    // we use Shape* to access the implementation of perimeter
    // in each specific class
    for (auto p : s)
        cout << p->perimeter() << endl;

    /*
    for_each(shapes.begin(), shapes.end(), [](Shape* p) {
        cout << p->perimeter() << endl;
    });
    */

    // remember we need to release the objects created with new
    for (auto p : s)
        delete p;

    return 0;
}