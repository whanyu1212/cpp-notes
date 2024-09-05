// calculator.cpp
#include "calculator.h"
#include <stdexcept>
#include <cctype>

// Token constructors
Token::Token(char k) : kind(k), value(0) {}
Token::Token(char k, double v) : kind(k), value(v) {}

// Implementation of get_token()
Token get_token()
{
    char ch;
    std::cin >> ch;

    switch (ch)
    {
    case ';':
    case 'q':
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
        return Token{ch}; // each character represents itself
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    {
        std::cin.putback(ch); // put digit back into the input stream
        double val;
        std::cin >> val;        // read a floating-point number
        return Token{'8', val}; // '8' represents a number
    }
    default:
        throw std::runtime_error("Bad token");
    }
}

// Implementation of primary()
double primary()
{
    Token t = get_token();
    switch (t.kind)
    {
    case '(':
    {
        double d = expression();
        t = get_token();
        if (t.kind != ')')
            throw std::runtime_error("')' expected");
        return d;
    }
    case '8':
        return t.value;
    case '-':
        return -primary();
    case '+':
        return primary();
    default:
        throw std::runtime_error("primary expected");
    }
}

// Implementation of term()
double term()
{
    double left = primary();
    Token t = get_token();

    while (true)
    {
        switch (t.kind)
        {
        case '*':
            left *= primary();
            t = get_token();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0)
                throw std::runtime_error("divide by zero");
            left /= d;
            t = get_token();
            break;
        }
        case '%':
        {
            int i1 = static_cast<int>(left);
            int i2 = static_cast<int>(primary());
            if (i2 == 0)
                throw std::runtime_error("divide by zero");
            left = i1 % i2;
            t = get_token();
            break;
        }
        default:
            return left;
        }
    }
}

// Implementation of expression()
double expression()
{
    double left = term();
    Token t = get_token();

    while (true)
    {
        switch (t.kind)
        {
        case '+':
            left += term();
            t = get_token();
            break;
        case '-':
            left -= term();
            t = get_token();
            break;
        default:
            return left;
        }
    }
}
