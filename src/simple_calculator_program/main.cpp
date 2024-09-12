// main.cpp
#include "calculator.h"
#include <iostream>

int main()
{
    try
    {
        while (true)
        {
            std::cout << "Enter an expression (q to quit): ";
            Token t = get_token();

            if (t.kind == 'q')
                break; // 'q' for quit
            if (t.kind == ';')
                continue; // ';' for "print"

            std::cin.putback(t.kind);
            std::cout << "Result: " << expression() << '\n';
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
    catch (...)
    {
        std::cerr << "unknown exception \n";
        return 2;
    }
}
