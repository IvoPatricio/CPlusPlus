#ifndef ITER_HPP
# define ITER_HPP

#include <limits>
#include <iostream>
#include <string>

template <typename T>
void iter(T *x, int length, void (f)(T const &))
{
    int i = 0;
    while (i < length)
    {
        f(x[i]);
        i++;
    }
}

template <typename T>
void print(T const &x)
{
    std::cout << x;
}

#endif