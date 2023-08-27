#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <limits>
#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
    T *Array_type;
    unsigned int size;
public:
    Array()
    {
        std::cout << "+Default Constructor called\n";
        this->Array_type = new T[1];
        size = 1;
    }

    Array(unsigned int n)
    {
        std::cout << "+Unsigned int Constructor called\n";
        this->Array_type = new T[n];
        size = n;
    }

    Array(Array const &src)
    {
        std::cout << "+Array Copy constructor called" << std::endl;
        this->size = src.size;
        this->Array_type = new T[this->size];
    }

    Array& operator=(Array const &src)
    {
        std::cout  <<"+Array Assignment constructor called " << std::endl;
        if (this != &src)
        {
            this->size = src.size;
            this->Array_type = new T[this->size];
        }
        return *this;
    }

    T& operator[](int i)
    {
        unsigned int index = static_cast<unsigned int>(i); 
        if (index >= size || index < 0)
            throw ErrorArray();
        return Array_type[index];
    }

    ~Array()
    {
        delete [] Array_type;
    }

    void Print_array() const
    {
        for (unsigned int i = 0; i < this->size; i++)
            std::cout << "Print Array: " << this->Array_type[i] << std::endl;
    }

    unsigned int getSize() const
    {
        std::cout << "Array Size:" << this->size << std::endl;
        return (this->size);
    }

    class ErrorArray : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("Array index is out of bounds");
            }
    };
};



#endif