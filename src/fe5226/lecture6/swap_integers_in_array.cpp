#include <iostream>
#include <vector>
using namespace std;

// initialize a vector with known size and return it
// but you cant make the size dynamic without using
// a function that returns a vector
std::array<int, 100> initializeArray()
{
    std::array<int, 100> A;
    for (int i = 0; i < 100; i++)
    {
        A[i] = i;
    }
    return A;
}

// Function to initialize and return a vector with dynamic size
vector<int> initializeArray(size_t size)
{
    vector<int> A(size);
    for (size_t i = 0; i < size; i++)
    {
        A[i] = i;
    }
    return A;
}

// Function to modify the array by swapping elements
void modify_array_by_swapping(vector<int> &arr)
{
    size_t n = arr.size();
    for (size_t i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
}

int main()
{
    size_t size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> myArray = initializeArray(size);

    modify_array_by_swapping(myArray);

    // Print the modified array to verify
    for (size_t i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}