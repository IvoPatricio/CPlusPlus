/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:21:08 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:21:11 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

std::string const Weapon::getType()
{
    return _type;
}

void Weapon::setType(std::string _type)
{
    this->_type = _type;
}

Weapon::Weapon(std::string _type) : _type(_type)
{
    std::cout << _type << ": constructor was created" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << _type <<": destructor was destroyed" << std::endl;
}