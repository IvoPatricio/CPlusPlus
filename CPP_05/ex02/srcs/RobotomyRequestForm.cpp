#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) 
{
    this->target = "Robot";
    std::cout << "+RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) 
{
    this->target = target;
    std::cout << "+RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm("RobotomyRequestForm", 72, 45) 
{
    this->target = src.target;
    std::cout << "+RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    std::cout  <<"+RobotomyRequestForm Assignment constructor called " << std::endl;
    if (this != &src)
    {
        std::string target = src.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "-RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::action() const
{
    int r;

    srand(time(0));
    r = rand() % 2;
    std::cout << "Makes some drilling noises" << std::endl;
    if (r == 0)
        std::cout << "Informs that " << this->target << " has been robotomized" << std::endl;
    else if (r == 1)
        std::cout << "Informs that " << this->target << " robotomy failed" << std::endl;
}