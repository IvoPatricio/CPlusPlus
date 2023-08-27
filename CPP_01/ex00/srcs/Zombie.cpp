/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:19:47 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:19:49 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << name << ": constructor was created" << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "void zombie: constructor was created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << name << ": destructor was destroyed" << std::endl;
}

void Zombie::announce(void) 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}