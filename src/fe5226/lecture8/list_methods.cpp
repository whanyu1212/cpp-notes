#include <iostream>
#include <list> // so we can use std::list
using namespace std;

// a template function to print the elements of a container
template <typename C>
void print(const C &c)
{
    for (auto &v : c)
        cout << v << " ";
    cout << endl;
}

int main()
{
    list<int> mylist(10); // initialize a list with 10 elements

    // do not use push_back and push_front because you will expand the list
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
    {
        *it = rand() % 6; // add a random number between 0 and 5
    }

    cout << "printing the list" << endl;
    print(mylist);

    cout << "printing the list in reverse order" << endl;

    // crbegin() returns a const_reverse_iterator pointing to the last element in the container
    for (auto it = mylist.crbegin(); it != mylist.crend(); ++it)
    {
        cout << *it << " ";
    }

    cout << "printing the 4th element" << endl;

    // advance the iterator to the 4th element before printing it
    // you cant use mylist[3] because it is not a vector
    auto it = mylist.begin();
    advance(it, 3);
    cout << *it << endl;

    mylist.pop_front(); // remove the first element
    mylist.pop_back();  // remove the last element

    cout << "printing the list after removing the first and last elements" << endl;

    print(mylist);

    // find the first element greater than 2 and remove it
    for (auto i = mylist.begin(); i != mylist.end(); i++)
        if (*i > 2)
        {
            mylist.erase(i);
            break;
        }
    print(mylist);

    // after removal, find the first element greater than 2 again and insert 100 before it
    for (auto i = mylist.begin(); i != mylist.end(); i++)
        if (*i > 2)
        {
            mylist.insert(i, 100);
            break;
        }
    print(mylist);

    // sort the list
    mylist.sort();
    print(mylist);

    return 0;
}