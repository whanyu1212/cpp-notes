#include <iostream>
#include <vector>
#include <cstdlib> // for rand()
#include <ctime>   // for time()

using namespace std;

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
void random_permutation(vector<int> &arr)
{
    size_t n = arr.size();
    for (size_t i = n - 1; i > 0; i--)
    {
        size_t j = rand() % (i + 1);
        swap(arr[i], arr[j]);
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    size_t size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> myArray = initializeArray(size);

    random_permutation(myArray);

    // Print the modified array to verify
    for (size_t i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}