#include <iostream>
#include <list>

// a predicate implemented as a class, i.e. as a function object:
struct is_odd
{
    bool operator()(const int &value) { return (value % 2) == 1; }
};
int main()
{
    int myints[] = {15, 36, 7, 17, 20, 39, 4, 1};
    std::list<int> mylist(myints, myints + 8); // 15 36 7 17 20 39 4 1

    // is_odd() is a constructor, i.e. it constructs a temporary object
    // remove_if is a member function of the list class
    mylist.remove_if(is_odd()); // 36 20 4
    for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    return 0;
}