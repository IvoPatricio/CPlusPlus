#ifndef FORM_HPP
# define FORM_HPP

#include "iostream"
#include "iomanip"
#include "string"
#include "cmath"
#include "exception"

#include "GradeTooHigh.hpp"
#include "GradeTooLow.hpp"
#include "Bureaucrat.hpp"

class Form
{
private:
    std::string const name;
    bool sign;
    int const grade_sign;
    int const grade_exe;
    std::string reason;
public:
    Form();
    Form(std::string const name, int const grade_sign, int const grade_exe);
    Form(Form const &src);
    virtual ~Form();
    Form &operator=(Form const &src);

    std::string getName();
    int getGrade_sign();
    int getGrade_exe();
    bool getSign_value();
    std::string getReason();
    void beSigned(Bureaucrat const &src);
};

std::ostream & operator<<(std::ostream & o, Form &src);

#endif