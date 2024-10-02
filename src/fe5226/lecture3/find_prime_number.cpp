#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    const unsigned upperBound = 100;       // find all prime numbers between 2 and upperBound
    const unsigned maxNumOfPrimes = 80000; // over-dimensioned: depends on upperBound
    unsigned primes[maxNumOfPrimes] = {2}; // initialize with the first prime
    unsigned numOfPrimeFound = 1;          // the number 2 is already in the array
    for (unsigned primeCandidate = 3; primeCandidate < upperBound; primeCandidate += 2)
    {
        // check if it is divisible for any of the already found primes up to sqrt(i)
        unsigned last = (unsigned)sqrt(primeCandidate);
        bool isPrime = true;
        for (unsigned j = 0; isPrime && (j < numOfPrimeFound) && (primes[j] <= last); ++j)
            isPrime = primeCandidate % primes[j] != 0;
        if (isPrime)
            primes[numOfPrimeFound++] = primeCandidate;
    }
    cout << "We found " << numOfPrimeFound << " prime numbers\n";
    for (unsigned j = 0; j < numOfPrimeFound; ++j)
        cout << primes[j] << ",";
    cout << endl;
    return 0;
}