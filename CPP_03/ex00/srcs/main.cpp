/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:13:30 by ifreire-          #+#    #+#             */
/*   Updated: 2023/07/01 08:13:31 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main()
{
    ClapTrap trap1("Furry");
    ClapTrap trap2("Knight");

    trap1.attack(trap2.getName());
    trap1.takeDamage(9);
    trap1.attack(trap2.getName());
    trap1.attack(trap2.getName());
    trap1.attack(trap2.getName());
    trap1.attack(trap2.getName());
    trap1.attack(trap2.getName());
    trap1.attack(trap2.getName());
    trap1.attack(trap2.getName());
    trap1.attack(trap2.getName());
    trap1.attack(trap2.getName());
    trap1.beRepaired(2);
    trap1.takeDamage(1);
}
