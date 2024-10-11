// Array names decay to a pointer, e.g., int arr[] -> int* arr which points to the first element of the array
#include <iostream>
using namespace std;

int main()
{
    // a is a pointer to the first element of the array
    int a[] = {1, 2, 3, 4, 5};
    // cout outside of a function will result in compilation error
    // the pointer a moves 2 elements to the right and then accesses the second element
    cout << (a + 2)[1];
}