#include "../includes/GradeTooHigh.hpp"

const char* GradeTooHighException::what() const throw()
{
    return ("Error, grade is too HIGH");
}
