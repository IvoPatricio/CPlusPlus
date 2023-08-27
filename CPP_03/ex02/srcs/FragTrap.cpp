/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:14:55 by ifreire-          #+#    #+#             */
/*   Updated: 2023/07/01 08:14:56 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    //setHP(100);
    setEnergy(100);
    setDamage(30);
    std::cout << getName() << " FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src._name)
{
    std::cout << "Parametric constructor called" << std::endl;
    *this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << " FragTrap Copy Assignment constructor called " << std::endl;

    _name = rhs._name;
    _hp = rhs._hp;
    _energy = rhs._energy;
    _damage = rhs._damage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << getName() << " FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (getEnergy() <= 0)
        std::cout << getName() << ": I have no energy left, so I can't bite :(" << std::endl;
    else if (getHP() <= 0)
        std::cout << getName() << ": I can't bite anyone without health :(" << std::endl;
    else
    {
        setEnergy(getEnergy() - 1); 
        std::cout << getName() << ": bites " << target << " dealing " \
            << getDamage() << " damage! :)"<< std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << getName() << ": FragTrap activating HighFivesGuys" << std::endl;
    std::cout << "---------------DISPLAYING_STATS----------------" << "\nNAME:" << getName() \
        << "\nHP:" << getHP() << "\nENERGY:" << getEnergy() << "\nDAMAGE:" << getDamage() \
            << "\n----------------------------------------------" << std::endl;
}
