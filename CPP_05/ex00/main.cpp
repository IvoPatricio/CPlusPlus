#include "./includes/Bureaucrat.hpp"

//https://cplusplus.com/reference/exception/exception/

int main(void)
{
    try
    {
        Bureaucrat a("Ana", 1);
        a.decrement_grade();
        a.decrement_grade();
        a.decrement_grade();
        a.decrement_grade();
        a.increment_grade();
        a.increment_grade();
        a.increment_grade();
        a.increment_grade();
        a.increment_grade();
        a.increment_grade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
