#include <iostream>
using namespace std;

int main()
{
    const unsigned maxNumOfRows = 9;

    unsigned nRows;
    // prompts the user to enter the number of rows of the Pascal triangle
    cout << "enter number of rows (" << 1 << " <= n <= " << maxNumOfRows << "): ";
    cin >> nRows;

    if (!cin || nRows > maxNumOfRows || nRows < 1)
    {
        cout << "invalid number of rows\n";
        return -1; // program terminates with error code
    }

    // over-dimensioned array. The first entry is always 1
    unsigned auxRow[2][maxNumOfRows + 1] = {{1}, {1}};
    // This produces the following
    //  Row 0:  1  0  0  0  0  0  0  0  0  0
    //  Row 1:  1  0  0  0  0  0  0  0  0  0

    for (unsigned r = 0; r < nRows; ++r)
    {
        // Performing a bitwise operation
        // if r is even, 0 is returned, otherwise 1 is returned
        unsigned *previousRow = auxRow[r & 1];
        // bitwise XOR ^
        // if same, 0 is returned, otherwise 1 is returned
        unsigned *nextRow = auxRow[(r & 1) ^ 1];

        nextRow[r] = 1; // the last element is always one
        // compute next row
        for (unsigned c = 1; c < r; ++c)
            nextRow[c] = previousRow[c - 1] + previousRow[c];
        // print the row
        cout << "row " << r + 1 << ":  ";
        for (unsigned c = 0; c <= r; ++c)
            cout << nextRow[c] << " ";
        cout << "\n";
    }

    return 0;
}