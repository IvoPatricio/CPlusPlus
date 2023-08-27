#ifndef INTERN_HPP
# define INTERN_HPP

class Intern;

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "iostream"
#include "string"
#include "map"
#include "exception"

class Intern
{
	private:
		AForm *form[3];
	public:
		Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &obj);
		~Intern();
		AForm *makeForm(std::string type_form, std::string target_form);

	class ErrorIntern : public std::exception 
	{
		public:
    		virtual const char* what() const throw();
	};
};

#endif