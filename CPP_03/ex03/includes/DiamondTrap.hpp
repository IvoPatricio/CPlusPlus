#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

//It prevents multiple instances of a class appearing as a parent class in the inheritance hierarchy when multiple inheritances are used.


/*class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap(std::string& name);
    ~DiamondTrap();
    void whoAmI();
};*/

class DiamondTrap: virtual public ClapTrap, virtual public ScavTrap 
{
private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(const std::string);
	~DiamondTrap();
		
};

#endif