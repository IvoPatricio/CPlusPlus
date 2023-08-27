#ifndef GRADETOOHIGH_HPP
# define GRADETOOHIGH_HPP

#include "exception"

class GradeTooHighException : public std::exception 
{
public:
    virtual const char* what() const throw();
};

#endif