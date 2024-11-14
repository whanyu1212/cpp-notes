#include <iostream>
#include <list> // so we can use std::list
int main()
{
    std::list<int> mylist(2, 100); // two ints with a value of 100
    mylist.push_front(200);        // 200 100 100
    mylist.push_front(300);        // 300 200 100 100
    std::cout << "mylist contains:";
    // it can also be type of std::list<int>::const_iterator
    for (auto it = mylist.cbegin(); it != mylist.cend(); ++it)
        std::cout << ' ' << *it; // space followed by the value of the element
    std::cout << '\n';
    return 0;
}