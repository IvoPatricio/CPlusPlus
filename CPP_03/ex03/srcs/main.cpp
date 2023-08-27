#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondTrap("Sparky");
    //diamondTrap.guardGate();
    //diamondTrap.whoAmI();
	/*ScavTrap claptrap1("test1");
    claptrap1.attack("Enemy");

	FragTrap fragtrap1("test2");
	fragtrap1.highFivesGuys();*/

	/*
    std::cout << "--------------------CONSTRUCTORS_&_ATTACK-----------------------" << std::endl;
	ClapTrap clap("FURRY");
	ScavTrap scav1("ROBBOT");
	ScavTrap scav2("Copy");
	FragTrap frag1("ABC");

	ClapTrap clap1(clap);
	ScavTrap scav3(scav2);
	FragTrap frag2(frag1);
	frag1.highFivesGuys();
	frag1.takeDamage(49);
	frag1.highFivesGuys();
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
	scav1.beRepaired(100);*/
}