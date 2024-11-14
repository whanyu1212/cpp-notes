#include <iostream>
#include <list>

struct GreaterThan
{
    GreaterThan(int value) : m_value(value) {}                  // constructor
    bool operator()(const int &v) const { return v > m_value; } // make the operator() const
    int m_value;                                                // m_value is a data member of the function object
};

int main()
{
    int myints[] = {15, 36, 7, 17, 20, 39, 4, 1};
    std::list<int> mylist(myints, myints + 8); // 15 36 7 17 20 39 4 1
    // GreaterThan(20) is a constructor, i.e. we construct a temporary object
    mylist.remove_if(GreaterThan(20)); // 15 7 17 20 4 1
    mylist.remove_if(GreaterThan(10)); // 7 4 1
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    return 0;
}