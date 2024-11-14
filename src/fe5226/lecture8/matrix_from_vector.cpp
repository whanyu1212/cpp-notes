#include <iostream>
#include <vector>
using namespace std;

std::vector<std::vector<int>> matrix(3, std::vector<int>(4, 0));

int main()
{
    // initialize the matrix
    for (size_t i = 0; i < matrix.size(); ++i)
    {
        for (size_t j = 0; j < matrix[i].size(); ++j)
        {
            matrix[i][j] = i + j;
        }
    }

    // print the matrix
    for (size_t i = 0; i < matrix.size(); ++i)
    {
        for (size_t j = 0; j < matrix[i].size(); ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}