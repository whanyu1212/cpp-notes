#include <iostream>
#include <bitset>
#include <iomanip> // std::setw

int main()
{
    // Initializes 3 8-bit unsigned integers, x, y, and r
    uint8_t x = 3, y = 9, r;

    // bitset is a class which helps visualizing binary representation
    // it requires: #include <bitset>
    using b8 = std::bitset<8>;
    using ui = unsigned; // Creating alias for unsigned int
    r = x;
    std::cout << std::setw(10) << "3: " << b8(r) << " : " << ui(r) << std::endl;
    r = y;
    std::cout << std::setw(10) << "9: " << b8(r) << " : " << ui(r) << std::endl;
    r = x & y;
    std::cout << std::setw(10) << "3 & 9: " << b8(r) << " : " << ui(r) << std::endl;
    r = x ^ y;
    std::cout << std::setw(10) << "3 ^ 9: " << b8(r) << " : " << ui(r) << std::endl;
    r = x | y;
    std::cout << std::setw(10) << "3 | 9: " << b8(r) << " : " << ui(r) << std::endl;
    r = ~x;
    std::cout << std::setw(10) << "~3: " << b8(r) << " : " << ui(r) << std::endl;

    // Initial binary of 9: 00001001
    // Shift left by 2 positions: 00100100
    // Binary 00100100 in decimal: 36
    r = y << 2;
    std::cout << std::setw(10) << "9 << 2: " << b8(r) << " : " << ui(r) << std::endl;

    // Initial binary of 9: 00001001
    // Shift right by 2 positions: 00000010
    // Binary 00000010 in decimal: 2
    r = y >> 2;
    std::cout << std::setw(10) << "9 >> 2: " << b8(r) << " : " << ui(r) << std::endl;
}