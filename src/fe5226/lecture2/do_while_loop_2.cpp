#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main()
{
    // Generate a random number between 1 and 100
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    int guess;
    int numGuesses = 0;

    do
    {
        cout << "Guess the secret number (between 1 and 100): ";
        cin >> guess;
        numGuesses++;

        if (guess < secretNumber)
        {
            cout << "Too low! Try again.\n";
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again.\n";
        }
        else
        {
            cout << "Congratulations! You guessed it in "
                 << numGuesses << " tries!\n";
        }
    } while (guess != secretNumber);

    return 0;
}