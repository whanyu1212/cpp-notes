#include <iostream>
#include <cmath>

bool isPrime(int num) {
    // Handle cases for 0 and 1
    if (num <= 1) {
        return false;
    }

    // Check divisibility from 2 up to the square root of the number
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) { // If divisible by any number in this range, it's not prime
            return false;
        }
    }

    // If no divisors were found, it's prime
    return true;
}

int main() {
    int x;

    std::cout << "Enter a positive integer: ";
    std::cin >> x;

    // Validate input - ensure it's positive
    if (x <= 0) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1; // Indicate an error
    }

    if (isPrime(x)) {
        std::cout << x << " is a prime number." << std::endl;
    } else {
        std::cout << x << " is not a prime number." << std::endl;
    }

    return 0;
}