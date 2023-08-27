#include "../includes/AForm.hpp"

AForm::AForm() : name("AForm"), grade_sign(150), grade_exe(150)
{
    std::cout << "+AForm Default Constructor called" << std::endl;
}

AForm::AForm(std::string const name, int const grade_sign, int const grade_exe) : name(name), grade_sign(grade_sign), grade_exe(grade_exe)
{
    std::cout << "+AForm Default Constructor called" << std::endl;
    std::cout << getName() << " grade required is ";
    if (grade_sign < 1 || grade_exe < 1)
        throw GradeTooHighException();
    else if (grade_sign > 150 || grade_exe > 150)
        throw GradeTooLowException();
    std::cout << getGrade_sign() << " and " << getGrade_exe() << std::endl;
}

AForm::AForm(AForm const &src) : name(src.name), grade_sign(src.grade_sign), grade_exe(src.grade_exe)
{
    std::cout << "+AForm Copy constructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &src)
{
    std::cout  <<"+AForm Assignment constructor called " << std::endl;
    if (this != &src)
    {
        std::string const name = src.name;
    }
    return *this;
}

std::ostream & operator<<(std::ostream & o, AForm &obj) 
{
    o << obj.getName() << ", AForm grade " << obj.getSign_value() << ".";
    return o;
}

AForm::~AForm()
{
    std::cout << "-AForm Destructor called" << std::endl;
}

void AForm::beSigned(Bureaucrat const &src)
{
    int grade;

    grade = src.grade;
    if (grade <= grade_sign && grade <= grade_exe)
        this->sign = true;
    else if (grade >= grade_sign || grade >= grade_exe)
    {
        this->sign = false;
        std::cout << getName() << " grade required to sign is ";
        if (grade >= grade_sign)
            this->reason = "grade required to sign it";
        else
            this->reason = "grade required to execute it";
        throw GradeTooLowException();
    }
}

std::string AForm::getReason() const
{
    return (reason);
}

bool AForm::getSign_value() const
{
    return (sign);
}

std::string AForm::getName() const
{
    return (name);
}

int AForm::getGrade_sign() const
{
    return (grade_sign);
}

int AForm::getGrade_exe() const
{
    return (grade_exe);
}

void AForm::execute(Bureaucrat const &executor) const
{
    std::cout << this->name << " grade is ";
    if (this->sign == true && executor.grade <= this->grade_exe)
    {
        std::cout << "executable and signed" << std::endl;
        this->action();
    }
    else
        throw GradeTooLowException();
}