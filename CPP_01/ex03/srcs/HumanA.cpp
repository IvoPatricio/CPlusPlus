/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:20:51 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:20:52 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

HumanA::HumanA(std::string _nameA, Weapon& weapon) : _nameA(_nameA), weapon(weapon)
{
    std::cout << _nameA << ": constructor was created and took his weapon " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << _nameA << ": destructor was destroyed" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << _nameA << " attacks with their " << weapon.getType() << std::endl;
}