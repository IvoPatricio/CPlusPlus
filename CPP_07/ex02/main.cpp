#include "./includes/Array.hpp"
#include "stdlib.h"

#define MAX_VAL 2
int main(int, char**)
{
    int* mirror = new int[MAX_VAL];
    Array<int> numbers(MAX_VAL);
    Array<int> a(numbers);
    //Array<int> a = numbers;
    a.getSize();
    numbers.getSize();
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        a[i] = value;
    }
    numbers.Print_array();
    a.Print_array();
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        if (numbers[i] != a[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}

