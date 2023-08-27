#ifndef AFORM_HPP
# define AFORM_HPP

class AForm;

#include "Bureaucrat.hpp"
#include "iostream"
#include "iomanip"
#include "string"
#include "cmath"
#include "exception"

#include "GradeTooHigh.hpp"
#include "GradeTooLow.hpp"

class AForm
{
private:
    std::string const name;
    bool sign;
    int const grade_sign;
    int const grade_exe;
    std::string reason;
public:
    AForm();
    AForm(std::string const name, int const grade_sign, int const grade_exe);
    AForm(AForm const &src);
    virtual ~AForm() = 0;
    AForm &operator=(AForm const &src);

    std::string getName() const;
    int getGrade_sign() const;
    int getGrade_exe() const;
    bool getSign_value() const;
    std::string getReason() const;
    void beSigned(Bureaucrat const &src);
    void execute(Bureaucrat const &executor) const;
    virtual void action() const = 0;
};

std::ostream & operator<<(std::ostream & o, AForm &src);

#endif