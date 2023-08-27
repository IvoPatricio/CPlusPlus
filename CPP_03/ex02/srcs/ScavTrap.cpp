/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:15:07 by ifreire-          #+#    #+#             */
/*   Updated: 2023/07/01 08:15:09 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    setHP(100);
    setEnergy(50);
    setDamage(20);
    std::cout << getName() << " ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src._name)
{
    std::cout << "Parametric constructor called" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << " ScavTrap Copy Assignment constructor called " << std::endl;

    _name = rhs._name;
    _hp = rhs._hp;
    _energy = rhs._energy;
    _damage = rhs._damage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << getName() << " ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergy() <= 0)
        std::cout << getName() << ": I have no energy left, so I can't attack :(" << std::endl;
    else if (getHP() <= 0)
        std::cout << getName() << ": I can't attack anyone without health :(" << std::endl;
    else
    {
        setEnergy(getEnergy() - 1);
        std::cout << getName() << ": attacks " << target << " causing " \
            << getDamage() << " damage! :)" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    int i = 0;
    std::cout << getName() << ": ScavTrap activating GATEkeeper" << std::endl;
    while (getEnergy() < 50)
    {
        setEnergy(getEnergy() + 1);
        i++;
    }
    if (i != 0)
        std::cout << getName() << ": Energy restored to the FULLEST " << std::endl;
    else
        std::cout << getName() << ": Energy was already FULL " << std::endl;
}
