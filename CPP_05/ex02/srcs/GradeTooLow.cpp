#include "../includes/GradeTooLow.hpp"

const char* GradeTooLowException::what() const throw()
{
    return ("Error, grade is too LOW");
}