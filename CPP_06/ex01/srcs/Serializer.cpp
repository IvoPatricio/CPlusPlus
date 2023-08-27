#include "../includes/Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "+Serializer Default Constructor called" << std::endl;
}

Serializer::Serializer(Serializer const &src)
{
    std::cout << "+Serializer Copy constructor called" << std::endl;
    *this = src;
}

Serializer &Serializer::operator=(Serializer const &src)
{
    std::cout  <<"+Serializer Assignment constructor called" << std::endl;
    *this = src;
    return *this;
}

Serializer::~Serializer()
{
    std::cout << "-Serializer Destructor called" << std::endl;
}

//It's an unsigned integer type exactly the size of a pointer. Whenever you need to do something 
//unusual with a pointer - like for example invert all bits(basically never used in CPP...)

uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
