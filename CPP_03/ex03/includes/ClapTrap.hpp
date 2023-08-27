#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class ClapTrap
{
protected:
    std::string _name;
    int _hp;
    int _energy;
    int _damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap const &rhs);

    std::string getName();
    int getHP();
    int getEnergy();
    int getDamage();

    void setName(std::string name);
    void setHP(int hp);
    void setEnergy(int energy);
    void setDamage(int damage);
    void attack(const std::string&amount);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif