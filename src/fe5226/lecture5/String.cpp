#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class String
{
    // private data member, a null pointer named m_data
    char *m_data;

    void reset(const char *s)
    {
        if (s != m_data) // if the new string is different from the current one
        {
            // release previous memory
            delete[] m_data;
            // allocate new memory: add 1 because of the null terminating character at the end
            m_data = new char[strlen(s) + 1]; // the last character will be '\0'
            // copy from s
            strcpy(m_data, s);
        }
    }

    // friend function
    // It can access the private members of the class
    // overloads the streaming operator
    friend ostream &operator<<(ostream &os, const String &s);

public:
    // constructor
    String() : m_data(nullptr) { reset(""); } // points to a string of null size (i.e. just one null character {0}
    String(const char *s) : m_data(nullptr) { reset(s); }
    String(const String &s) : m_data(nullptr) { reset(s.m_data); }

    // destructor
    ~String() { delete[] m_data; }

    // lenght of the string
    unsigned length() const { return strlen(m_data); }

    const char *operator()() const
    {
        return m_data;
    }

    // first overload += operator
    String &operator+=(const char *rhs)
    {
        unsigned n2 = strlen(rhs);
        if (n2 > 0)
        {
            unsigned n1 = length();
            char *tmp = new char[n1 + n2 + 1]; // allocate new memory storage
            strncpy(tmp, m_data, n1);
            strcpy(tmp + n1, rhs);
            delete[] m_data; // delete old memory storage
            m_data = tmp;    // point to the new memory storage
        }
        return *this;
    }

    // second overload += operator
    String &operator+=(const String &rhs)
    {
        return *this += rhs.m_data; // dispatch to the other overload operator +=, which takes an argument const char*
    }

    // first overload operator=
    // makes a copy of the string pointed by rhs
    String &operator=(const char *rhs)
    {
        reset(rhs);
        return *this;
    }

    // second overload operator=
    // makes a deep copy of the string contained in rhs
    String &operator=(const String &rhs)
    {
        return *this = rhs.m_data; // dispatch to the other overload operator =, which takes an argument const char*
    }
};

// streaming operator
ostream &operator<<(ostream &os, const String &s)
{
    os << s.m_data;
    return os;
}

int main()
{
    String s1("Hello");
    String s2("World");

    cout << s1 << endl;

    s1 += " ";
    cout << s1 << endl;

    s1 += s2;
    cout << s1 << endl;

    String s3;
    s3 = s1;
    cout << s3 << endl;

    return 0;
}
