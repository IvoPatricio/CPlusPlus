/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:20:20 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:33:18 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(void) : name("Unnamed Zombie")
{
    std::cout << name << ": was created" << std::endl;
}

//new allocates memory for a C++ class object (noname zombie)
//stores an instance of std::basic_string and performs the input and output operations

Zombie* Zombie::zombieHorde(int n, std::string name) 
{
    Zombie* horde = new Zombie[n];
    std::string name_z;

    name_z = name;
    for (int i = 0; i < n; i++) 
    {
        name_z += "z";
        horde[i].name = name_z;
    }
    return horde;
}
