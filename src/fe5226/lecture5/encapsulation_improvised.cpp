#include <iostream>
using namespace std;

class Rectangle
{
private:
    int m_width, m_height;

public:
    // Constructor to initialize member variables
    Rectangle(int width, int height) : m_width(width), m_height(height) {}

    // Getter methods to access member variables
    int getWidth() const { return m_width; }
    int getHeight() const { return m_height; }

    // Method to calculate the area
    int area() const { return m_width * m_height; }
};

int main()
{
    // Constructors cannot have a return type, not even void.
    // It must have the same name as the class or struct.
    Rectangle rect(3, 4); // Use constructor to initialize
    cout << "area: " << rect.area() << endl;
    return 0;
}