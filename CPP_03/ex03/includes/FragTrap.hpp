#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "../includes/ClapTrap.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap();
    FragTrap &operator=(FragTrap const &rhs);

    void attack(const std::string& target);
    void highFivesGuys();
};

#endif
