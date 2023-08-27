#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "../includes/ClapTrap.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();
    ScavTrap &operator=(ScavTrap const &rhs);

    void attack(const std::string& target);
    void guardGate();
};

#endif
