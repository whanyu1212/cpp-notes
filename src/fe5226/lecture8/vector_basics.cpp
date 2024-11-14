#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 2nd argument omitted: use default allocator

    vector<int> x; // no need to specify size unlike array

    // you can also do something like vector<int> x(4,10); // 4 elements with value 10

    for (size_t i = 0; i < 3; ++i)
        x.push_back(rand());  // append at the end, size increases (dynamic)
    cout << x.size() << endl; // print size
    for (size_t i = 0; i < x.size(); ++i)
        cout << x[i] << endl;
    return 0;
}

// Dynamic size
// Allows random access in constant time, i.e.O(1)
// Insertion of new elements at the end of the vector are O(1), assuming capacity is sufficient.
// Capacity is automatically increased when necessary
// Erase at the end of the vector is O(1).
// Insertion and deletion in random position are O(n)
// Guaranteed to be memory contiguous(i.e.we can cast to a pointer and use pointer arithmetic)
// Requires dynamic allocation, handled automatically