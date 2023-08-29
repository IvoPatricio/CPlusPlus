#include "../includes/Base.hpp"

Base::Base()
{
    std::cout << "+Base Default Constructor called" << std::endl;
}

Base::Base(Base const &src)
{
    std::cout << "+Base Copy Constructor called" << std::endl;
    *this = src;
}

Base::~Base()
{
    std::cout << "-Base Destructor called" << std::endl;
}

Base &Base::operator=(Base const &src)
{
    std::cout << "+Base Assignment Constructor called" << std::endl;
    if (this != &src)
        *this = src;
    return *this;
}