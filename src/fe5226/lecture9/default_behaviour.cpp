#include <iostream>
using namespace std;

struct Shape
{
    // all the derived class must provide an implementation for foo
    virtual double foo() const = 0; // pure virtual
};
struct Polygon : Shape
{ // add an intermediate class Polygon
    virtual double foo() const { cout << "I am a polygon\n"; };
};
struct Square : Polygon
{
    // inherits foo from Polygon
};
struct Hexagon : Polygon
{
    // inherits foo from Polygon
};
struct Circle : Shape
{
    virtual double foo() const { cout << "I am a NOT a polygon\n"; };
};