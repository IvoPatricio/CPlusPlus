#ifndef GRADETOOLOW_HPP
# define GRADETOOLOW_HPP

#include "exception"

class GradeTooLowException : public std::exception 
{
public:
    virtual const char* what() const throw();
};

#endif