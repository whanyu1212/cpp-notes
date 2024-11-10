#include <iostream>
#include <string>
using namespace std;

// base class
struct Person
{
    // member variables
    string m_szLastName;
    int m_iYearOfBirth;

    // constructor with parameters
    Person(string szName, int iYear)
        : m_szLastName(szName), m_iYearOfBirth(iYear)
    {
    }

    // member function
    void print()
    {
        cout << "Last name: " << m_szLastName << endl;
        cout << "Year of birth: " << m_iYearOfBirth << endl;
    }
};

// derived class

struct Student : Person
{
    // member variables
    string m_szUniversity;
    Student(string szName, int iYear, string szUniversity)
        : Person(szName, iYear) // we save code here
          ,
          m_szUniversity(szUniversity)
    {
    }
    void print()
    {
        // call function print from base class
        Person::print(); // we save code here
        cout << "University " << m_szUniversity << endl;
    }
};

int main()
{
    // create an object of the base class
    Student s("Smith", 1980, "NUS");
    s.print();

    return 0;
}