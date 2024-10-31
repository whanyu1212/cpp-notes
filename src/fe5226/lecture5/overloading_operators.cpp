#include <iostream>
using namespace std;

struct IntArray
{
    int *m_p;
    IntArray() : m_p(nullptr) {}
    IntArray(unsigned size) : m_p(new int[size]) {}
    // Overloading of the subscript operator
    const int &operator[](unsigned i) const { return m_p[i]; } // const version
    int &operator[](unsigned i) { return m_p[i]; }             // non const version
    ~IntArray() { delete[] m_p; }
};

int main()
{
    IntArray a(10);
    a[0] = 5; // calls the non-const version of the subscript operator
    cout << a[0] << endl;

    const IntArray b(20);
    // b[0] = 5; // error: assignment of read-only location
    cout << b[0] << endl; // calls the const version of the subscript operator

    return 0;
}