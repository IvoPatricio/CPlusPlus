#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include "iostream"
#include "iomanip"
#include "string.h"
#include "cstdlib"
#include "cstring"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "limits.h"
#include "stdint.h"
#include "cctype"

// Private constructors to prevent instantiation of the class
// Singleton design (fake static IN CPP)

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &src);
    ScalarConverter &operator=(ScalarConverter const &src);
public:
    static void Convert(const std::string str);
    ~ScalarConverter();
};

#endif
