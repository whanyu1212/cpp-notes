#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter the x-coordinate of point A: ";
    double x1;
    std::cin >> x1;

    std::cout << "Enter the y-coordinate of point A: ";
    double y1;
    std::cin >> y1;

    std::cout << "Enter the x-coordinate of point B: ";
    double x2;
    std::cin >> x2;

    std::cout << "Enter the y-coordinate of point B: ";
    double y2;
    std::cin >> y2;

    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}