#ifndef BASE_HPP
# define BASE_HPP

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

// Private constructors to prevent instantiation of the class
// Singleton design (fake static in cpp)

class Base
{
public:
    virtual ~Base();
};

class A : public Base
{
    ;
};

class B : public Base
{
    ;
};

class C : public Base
{
    ;
};

#endif
