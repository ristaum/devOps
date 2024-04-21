#include "myLib.h"
#include <iostream>

void print_test()
{
    std::cout << "print_test" << std::endl;
}

int factorial(int _n)
{
    return _n <= 1 ? 1 : factorial(_n - 1) * _n;
}