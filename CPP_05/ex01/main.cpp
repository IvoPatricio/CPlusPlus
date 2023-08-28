#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"

//https://cplusplus.com/reference/exception/exception/

int main(void)
{
    Form form1("form1", 13, 13);
    Form form2(form1);
    Bureaucrat a("Ana", 10);
    std::cout << form2.getName() << " grade to execute is " << form2.getGrade_exe() << std::endl;
    std::cout << form2 << std::endl;
    try
    {
        form2.beSigned(a);
        a.decrement_grade();
        a.decrement_grade();
        a.decrement_grade();
        a.decrement_grade();
        form2.beSigned(a);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------" << std::endl;
    a.signForm(form2.getName(), form2.getSign_value(), form2.getReason());
}
