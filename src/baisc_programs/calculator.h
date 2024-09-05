// calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

// Token structure definition
struct Token
{
    char kind;               // what kind of token
    double value;            // for numbers: a value
    Token(char k);           // constructor for operators, parentheses, etc.
    Token(char k, double v); // constructor for numbers
};

// Function declarations
Token get_token();
double expression();
double term();
double primary();

#endif // CALCULATOR_H
