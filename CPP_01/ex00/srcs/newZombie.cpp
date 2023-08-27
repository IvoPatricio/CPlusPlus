/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:19:35 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:19:37 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

//(returns new) allocates memory for zombie::zombie(std::string)
Zombie* Zombie::newZombie(std::string name)
{
    this->name = name;
    return new Zombie(name);
}