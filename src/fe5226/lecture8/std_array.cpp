#include <iostream>
#include <array>
// guarantees that the array is contiguous in memory
//  | 1 | 2 | 2 | 3 |
//  access is O(1)
// also improves cache performance
using namespace std;
int main()
{
    // Fixed size defined at compile time
    // Allows random access in constant time, i.e. O(1)
    array<int, 4> x = {1, 2, 2, 3};
    for (size_t i = 0; i < x.size(); ++i)
        cout << x[i] << endl;
    return 0;
}