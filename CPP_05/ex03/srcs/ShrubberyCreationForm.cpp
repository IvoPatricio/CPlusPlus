#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "Shrubbery";
	std::cout << "+ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
	std::cout << "+ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = src.target;
	std::cout << "+ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	std::cout << "+ShrubberyCreationForm Assignment constructor called " << std::endl;
	if (this != &src)
	{
		std::string target = src.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "-ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::action() const
{
	std::cout << "Created a file " << this->target << " and writed an ASCII tree inside it" << std::endl;
	std::ofstream myfile;

	myfile.open((this->target + "_shrubbery").c_str());
	myfile << " _ \n";
	myfile << "| |\n";
	myfile << "| |_     _____  _____  _____\n";
	myfile << "|  _|   | /__/ | ___/ | ___/ \n";
	myfile << "| |___  | |    | |__  | |__\n";
    myfile << "|_____| |_|    |____| |____|\n";
    myfile.close();
}