#include "./includes/AForm.hpp"
#include "./includes/Bureaucrat.hpp"
#include "./includes/Intern.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat a("Ana", 5);
	Intern	someRandomIntern;
	AForm	*PresidentialPardonForm;
	AForm	*RobotomyRequestForm;
	AForm	*ShrubberyCreationForm;

	PresidentialPardonForm = someRandomIntern.makeForm("PresidentialPardonForm", "Test0");
	RobotomyRequestForm = someRandomIntern.makeForm("RobotomyRequestForm", "Test1");
	ShrubberyCreationForm = someRandomIntern.makeForm("ShrubberyCreationForm", "Test2");
	std::cout << *PresidentialPardonForm << std::endl;
	std::cout << *RobotomyRequestForm << std::endl;
	std::cout << *ShrubberyCreationForm << std::endl;
	try
    {
        PresidentialPardonForm->beSigned(a);
        a.executeForm(*PresidentialPardonForm);

		RobotomyRequestForm->beSigned(a);
        a.executeForm(*RobotomyRequestForm);

		ShrubberyCreationForm->beSigned(a);
        a.executeForm(*ShrubberyCreationForm);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
