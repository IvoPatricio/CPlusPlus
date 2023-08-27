/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:20:10 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:20:12 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main() 
{
    const int n = 3;

    Zombie* horde = Zombie::zombieHorde(n, "Infected Zombies");
    for (int i = 0; i < n; i++) 
    {
        horde[i].announce();
    }
    //delete[] deallocates the array of zombies
    delete[] horde;

    return 0;
}
