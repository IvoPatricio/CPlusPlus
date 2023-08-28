#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150)
{
    std::cout << "+Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
    std::cout << "+Bureaucrat Default Constructor called" << std::endl;
    std::cout << getName() << ", bureaucrat grade: ";
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    std::cout << getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade)
{
    std::cout << "+Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    std::cout  <<"+Bureaucrat Assignment constructor called " << std::endl;
    if (this != &src)
    {
        std::string const name = src.name;
        grade = src.grade;
    }
    return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat &src) 
{
    o << src.getName() << ", bureaucrat grade is: " << src.getGrade();
    return o;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "-Bureaucrat Destructor called" << std::endl;
}

std::string Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade()
{
    return (this->grade);
}

void Bureaucrat::increment_grade()
{
    this->grade--;
    if (this->grade < 1)
        throw GradeTooHighException();
    std::cout << getName() << ", bureaucrat new grade: ";
    std::cout << getGrade() << std::endl;
}

void Bureaucrat::decrement_grade()
{
    this->grade++;
    if (this->grade > 150)
        throw GradeTooLowException();
    std::cout << getName() << ", bureaucrat new grade: ";
    std::cout << getGrade() << std::endl;
}
