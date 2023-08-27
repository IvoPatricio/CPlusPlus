#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "AForm.hpp"
# include "iostream"
# include "string"
# include "fstream"
# include "iostream"

class ShrubberyCreationForm : public AForm
{
  private:
	std::string target;

  public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
	void action() const;
};

#endif