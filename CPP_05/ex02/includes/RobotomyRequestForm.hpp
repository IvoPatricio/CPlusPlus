#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "iostream"
#include "string"
#include "ctime"
#include "cstdlib"


class RobotomyRequestForm : public AForm 
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    ~RobotomyRequestForm();
    RobotomyRequestForm & operator=(RobotomyRequestForm const & obj);
    void action() const;
};

#endif