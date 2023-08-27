#ifndef BUREAUCRAF_HPP
# define BUREAUCRAF_HPP

class	Bureaucrat;

# include "AForm.hpp"
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

  public:
	int grade;
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &src);
	virtual ~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &src);

	std::string getName() const;
	int getGrade() const;
	void increment_grade();
	void decrement_grade();
	void signForm(std::string const name, bool sign, std::string reason);
	void executeForm(AForm const &form);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &src);

#endif
