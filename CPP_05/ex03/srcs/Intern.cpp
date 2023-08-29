#include "../includes/Intern.hpp"

Intern::Intern()
{
	std::cout << "+Intern Default Constructor called" << std::endl;
	form[0] = NULL;
	form[1] = NULL;
	form[2] = NULL;
}

Intern::Intern(Intern const &src)
{
	std::cout << "+Intern Copy constructor called" << std::endl;
	form[0] = NULL;
	form[1] = NULL;
	form[2] = NULL;
	(void) src;
}

Intern &Intern::operator=(Intern const &src)
{
	std::cout << "+Intern Assignment constructor called " << std::endl;
	form[0] = NULL;
	form[1] = NULL;
	form[2] = NULL;
	(void) src;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "-Intern Destructor called" << std::endl;
	delete form[0];
	delete form[1];
	delete form[2];
}

const char* Intern::ErrorIntern::what() const throw()
{
    return ("Intern can't create a form without the correct name of the concrete class");
}

AForm *Intern::makeForm(std::string type_form, std::string target_form)
{
	std::string type[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int i = 0;
	int x = 0;
	int err = 0;
	while (i < 3)
	{

		if (type[i] == type_form)
		{
			err++;
			switch (i)
			{
				case (0) :
					form[0] = new PresidentialPardonForm;
					x = 0;
					std::cout << "Intern creates " << target_form << std::endl;
					break;
				case (1) :
					form[1] = new RobotomyRequestForm;
					x = 1;
					std::cout << "Intern creates " << target_form << std::endl;
					break;
				case (2) :
					form[2] = new ShrubberyCreationForm;
					x = 2;
					std::cout << "Intern creates " << target_form << std::endl;
					break;
			}
		}
		i++;
	}
	if (err == 0)
		throw ErrorIntern();
	return (form[x]);
}