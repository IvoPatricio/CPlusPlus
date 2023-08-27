#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include "limits"
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "exception"

class Exception_find : public std::exception
{
public:
    virtual const char *what() const throw()
    {
        return ("Error, no occurences were found");
    }
};

template <typename T>
T easyfind(T container, int value)
{
    int count = 0;

    count = std::count(container.begin(), container.end(), value);
    /*for (unsigned int i = 0; i < container.size(); i++)
    {
        std::cout << container.at(i) << std::endl;
        if (container.at(i) == value)
            count++;
    }*/
    if (count == 0)
        throw Exception_find();
    return container;
};

#endif