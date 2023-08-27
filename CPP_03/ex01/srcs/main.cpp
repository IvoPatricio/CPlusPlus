/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:13:56 by ifreire-          #+#    #+#             */
/*   Updated: 2023/07/01 08:13:57 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main(void)
{
    std::cout << "--------------------CONSTRUCTORS_&_ATTACK-----------------------" << std::endl;
	ClapTrap clap("FURRY");
	ScavTrap scav1("ROBBOT");
	ScavTrap scav2("TEST");

	ClapTrap clap1 (clap);
	ScavTrap scav3(scav2);

	scav2 = scav1;
    scav1.attack(clap.getName());
    clap.takeDamage(20);
    clap.attack(scav1.getName());
    scav1.takeDamage(20);
    std::cout << std::endl;

    std::cout << "-----------------------CLAP_ACTIONS-------------------------" << std::endl;
	clap.beRepaired(20);
	clap.takeDamage(90);
	clap.takeDamage(10);
	clap.beRepaired(100);

	std::cout << "-----------------------SCAV_ACTIONS-------------------------" << std::endl;

	scav1.beRepaired(20);
	scav1.takeDamage(100);
	scav1.beRepaired(100);
}
