#ifndef BUREAUCRAF_HPP
# define BUREAUCRAF_HPP

# include "GradeTooHigh.hpp"
# include "GradeTooLow.hpp"
# include "exception"
# include "iomanip"
# include "iostream"
# include "string"

class Bureaucrat
{
private:
	std::string const name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &src);
	virtual ~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &src);

	std::string getName();
	int getGrade();
	void increment_grade();
	void decrement_grade();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &src);

#endif
