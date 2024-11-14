#include <set>
#include <iostream>
using namespace std;
int main()
{
    set<int> s;   // a set of integers
    s.insert(10); // insert 10 in the set
    s.insert(4);  // insert 4 in the set
    s.insert(9);  // insert 9 in the set
    s.insert(4);  // does nothing, because 4 is already there
    // print elements sequentially (note they are ordered)
    for (auto i = s.begin(); i != s.end(); ++i)
        cout << *i << endl; // we use the iterator i
    return 0;
}