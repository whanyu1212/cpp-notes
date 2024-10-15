#include <iostream>
using namespace std;

bool isPrime(int num)
{
    // Handle cases for 0 and 1
    if (num <= 1)
    {
        return false;
    }

    // Check divisibility from 2 up to the square root of the number
    for (int i = 2; i <= std::sqrt(num); ++i)
    {
        if (num % i == 0)
        { // If divisible by any number in this range, it's not prime
            return false;
        }
    }

    // If no divisors were found, it's prime
    return true;
}

unsigned nthPrime(unsigned n)
{
    unsigned num = 2;
    unsigned count = 0;

    while (count < n)
    {
        if (isPrime(num) == true)
        {
            ++count;
        }
        ++num;
    }

    return num - 1;
}

int main()
{
    cout << "Enter a positive integer: ";
    unsigned n;
    cin >> n;

    // Validate input - ensure it's positive
    if (n <= 0)
    {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1; // Indicate an error
    }

    cout << "The " << n << "th prime number is: " << nthPrime(n) << endl;
}