#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for setting the seed of the random number generator
using namespace std;

// conventional way of summing the elements of an array
int main()
{
    // set the seed of the random number generator
    srand(time(0));

    int arr[100]; // declare an array of 100 integers
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand(); // assign a random integer to each element of the array

        // calculate the sum of the elements of the array
        sum += arr[i];
    }

    cout << "Sum of the elements of the array: " << sum << endl;

    return 0;
}

// using pointer arithmetic to sum the elements of an array

int main()
{
    // set the seed of the random number generator
    srand(time(0));

    int arr[100]; // declare an array of 100 integers
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand(); // assign a random integer to each element of the array
    }

    // declare a pointer to the first element of the array by default
    int *ptr = arr;

    // calculate the sum of the elements of the array using pointer arithmetic
    for (int i = 0; i < 100; i++)
    {
        sum += *(ptr + i);
    }

    cout << "Sum of the elements of the array: " << sum << endl;

    return 0;
}