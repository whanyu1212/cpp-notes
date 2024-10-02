#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> sieveOfEratosthenes(int n)
{
    // Create a boolean array "isPrime[0..n]" and initialize
    // all entries it as true. A value in isPrime[i] will
    // finally be false if i is Not a prime, else true.
    std::vector<bool> isPrime(n + 1, true);
    std::vector<int> primes;

    for (int i = 2; i <= std::sqrt(n); i++)
    {
        if (isPrime[i])
        {
            // Update all multiples of i
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // Collect all prime numbers
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

int main()
{
    int n;
    std::cout << "Enter a number n to find all primes up to n: ";
    std::cin >> n;

    if (n <= 1)
    {
        std::cout << "Please enter a number greater than 1." << std::endl;
        return 1;
    }

    std::vector<int> primes = sieveOfEratosthenes(n);

    std::cout << "Prime numbers up to " << n << " are:" << std::endl;
    for (int prime : primes)
    {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}