#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

/**
 * @brief Reads temperatures from standard input and stores them in a vector.
 *
 * @return vector<double> A vector containing the temperatures.
 */
vector<double> read_temperatures()
{
    vector<double> temps = {23.5, 24.0, 24.5, 25.0, 25.5};
    for (double temp; cin >> temp;)
    {
        temps.push_back(temp);
    }
    return temps;
}

/**
 * @brief Calculates the median of a sorted vector of doubles.
 *
 * @param temps A sorted vector of doubles.
 * @return double The median value.
 */
double calculate_median(vector<double> &temps)
{
    size_t size = temps.size();
    if (size % 2 == 0)
    {
        // If even, average the two middle elements
        return (temps[size / 2 - 1] + temps[size / 2]) / 2;
    }
    else
    {
        // If odd, take the middle element
        return temps[size / 2];
    }
}

int main()
{
    vector<double> temps = read_temperatures();

    // Sort the vector
    sort(temps.begin(), temps.end());

    // Calculate and print the median
    double median = calculate_median(temps);
    cout << "Median temperature: " << median << endl;

    return 0;
}