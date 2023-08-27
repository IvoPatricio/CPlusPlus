#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) 
{
    this->target = "President";
    std::cout << "+PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) 
{
    this->target = target;
    std::cout << "+PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm("PresidentialPardonForm", 25, 5) 
{
    this->target = src.target;
    std::cout << "+PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    std::cout  <<"+PresidentialPardonForm Assignment constructor called " << std::endl;
    if (this != &src)
    {
        std::string target = src.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "-PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::action() const
{
    std::cout << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}