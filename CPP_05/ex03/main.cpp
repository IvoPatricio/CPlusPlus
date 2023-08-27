#include "./includes/AForm.hpp"
#include "./includes/Bureaucrat.hpp"
#include "./includes/Intern.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm	*PresidentialPardonForm;
	//AForm	*RobotomyRequestForm;
	//AForm	*ShrubberyCreationForm;

	//RobotomyRequestForm = someRandomIntern.makeForm("RobotomyRequestForm", "Test1");
	//ShrubberyCreationForm = someRandomIntern.makeForm("ShrubberyCreationForm", "Test2");
	Bureaucrat a("Ana", 5);
	try
    {
		PresidentialPardonForm = someRandomIntern.makeForm("PresidentialPardonForm", "Test0");
        PresidentialPardonForm->beSigned(a);
        a.executeForm(*PresidentialPardonForm);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
