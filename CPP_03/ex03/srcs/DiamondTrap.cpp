#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap() {
	std::cout << "DiamondTrap created from default constructor" << std::endl;
	name = "";
}

DiamondTrap::DiamondTrap(const std::string str): ClapTrap() {
	name = str;
	std::cout << "DiamondTrap created from constructor[str]" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap *" << name <<  "* destroyed." << std::endl;
}
