#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "iostream"
#include "iomanip"
#include "string.h"
#include "cstdlib"
#include "cstring"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "limits.h"
#include "cctype"
#include "Data.hpp"
#include "stdint.h"


// Private constructors to prevent instantiation of the class
// Singleton design (fake static in cpp)

class Serializer
{
private:
    Serializer();
    Serializer(Serializer const &src);
    Serializer &operator=(Serializer const &src);
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    ~Serializer();
};

#endif
