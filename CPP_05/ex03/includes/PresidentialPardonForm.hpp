#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "iostream"
#include "string"

class PresidentialPardonForm : public AForm 
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm();
    PresidentialPardonForm & operator=(PresidentialPardonForm const & obj);
    void action() const;
};

#endif
