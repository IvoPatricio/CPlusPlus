#include "./includes/Bureaucrat.hpp"
#include "./includes/AForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"


int main(void)
{
    Bureaucrat a("Ana", 5);
    AForm* form1;
    AForm* form2;
    AForm* form3;

    form1 = new PresidentialPardonForm("abc");
    form2 = new RobotomyRequestForm("Robo");
    form3 = new ShrubberyCreationForm("Shrubbery");
    try
    {
        //form1->beSigned(a);
        //a.executeForm(*form1);
        form3->beSigned(a);
        a.executeForm(*form3);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    a.signForm(form3->getName(), form3->getSign_value(), form3->getReason());
    delete form1;
    delete form2;
    delete form3;
}
