/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:20:55 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:20:57 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
    std::cout << "here: " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string _nameB): _nameB(_nameB), weapon()
{
    std::cout << _nameB << ": constructor was created" << std::endl;
}


HumanB::~HumanB(void)
{
    std::cout << _nameB << ": destructor was destroyed" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->_nameB << " attacks with their " << this->weapon->getType() << std::endl;
}