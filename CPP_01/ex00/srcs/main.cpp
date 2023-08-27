/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:19:28 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:31:43 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

//delete deallocates if [] deallocates an array

int main()
{
    Zombie Zombie1;
    //Zombie Zombie1("FirstZombie");
    //Zombie1.announce();

    Zombie1.randomChump("RandomChomp");

    Zombie* Zombie2 = Zombie1.newZombie("NewZombie");
    Zombie2->announce();
    delete Zombie2;

    return 0;
}