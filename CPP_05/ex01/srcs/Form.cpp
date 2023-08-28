#include "../includes/Form.hpp"

Form::Form() : name("Form"), grade_sign(150), grade_exe(150)
{
    std::cout << "+AForm Default Constructor called" << std::endl;
}

Form::Form(std::string const name, int const grade_sign, int const grade_exe) : name(name), grade_sign(grade_sign), grade_exe(grade_exe)
{
    std::cout << "+Form Default Constructor called" << std::endl;
    std::cout << getName() << " grade required is ";
    if (grade_sign < 1 || grade_exe < 1)
        throw GradeTooHighException();
    else if (grade_sign > 150 || grade_exe > 150)
        throw GradeTooLowException();
    std::cout << getGrade_sign() << " and " << getGrade_exe() << std::endl;
}

Form::Form(Form const &src) : name(src.name), grade_sign(src.grade_sign), grade_exe(src.grade_exe)
{
    std::cout << "+Form Copy constructor called" << std::endl;
}

Form &Form::operator=(Form const &src)
{
    std::cout  <<"+Form Assignment constructor called " << std::endl;
    if (this != &src)
    {
        std::string const name = src.name;
    }
    return *this;
}

std::ostream & operator<<(std::ostream & o, Form &src) 
{
    o << "Signed (FalseOrTrue):" << src.getSign_value() << " " << src.getName() << ", grade required to sign: " << src.getGrade_sign() << " and execute: " << src.getGrade_exe();
    return o;
}

Form::~Form()
{
    std::cout << "-Form Destructor called" << std::endl;
}

void Form::beSigned(Bureaucrat const &src)
{
    int grade;

    grade = src.grade;
    if (grade <= grade_sign && grade <= grade_exe)
        this->sign = true;
    else if (grade >= grade_sign || grade >= grade_exe)
    {
        this->sign = false;
        std::cout << getName() << " ";
        if (grade >= grade_sign)
            this->reason = "grade required to sign it";
        else
            this->reason = "grade required to execute it";
        throw GradeTooLowException();
    }
}

std::string Form::getReason()
{
    return (reason);
}

bool Form::getSign_value()
{
    return (sign);
}

std::string Form::getName()
{
    return (name);
}

int Form::getGrade_sign()
{
    return (grade_sign);
}

int Form::getGrade_exe()
{
    return (grade_exe);
}