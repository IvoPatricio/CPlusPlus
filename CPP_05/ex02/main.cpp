#include "./includes/Bureaucrat.hpp"
#include "./includes/AForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"


int main(void)
{
    //AForm form1("form1", 13, 13);
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
        form3->beSigned(a);
        //form3->execute(a);
        //a.executeForm(*form1);
        a.executeForm(*form3);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n\n---------\n\n" << std::endl;
    a.signForm(form1->getName(), form1->getSign_value(), form1->getReason());
    delete form1;
    delete form2;
    delete form3;
}
