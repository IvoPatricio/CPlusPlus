#include "../includes/ScavTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hp(100), _energy(50), _damage(20)
{
    std::cout << "ClapTrap Constructor name(" << getName() <<") called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Parametric constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << " Copy Assignment constructor called " << std::endl;

    _name = rhs._name;
    _hp = rhs._hp;
    _energy = rhs._energy;
    _damage = rhs._damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor (" << getName() << ") called" << std::endl;
}

std::string ClapTrap::getName()
{
    return (_name);
}

int ClapTrap::getHP()
{
    return (_hp);
}

int ClapTrap::getEnergy()
{
    return (_energy);
}

int ClapTrap::getDamage()
{
    return (_damage);
}


void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHP(int hp)
{
    this->_hp = hp;
}

void ClapTrap::setEnergy(int energy)
{
    this->_energy = energy;
}

void ClapTrap::setDamage(int damage)
{
    this->_damage = damage;   
}


void ClapTrap::attack(const std::string &target)
{
    if (getEnergy() <= 0)
        std::cout << getName() << ": I have no energy left, so I can't bite :(" << std::endl;
    else if (getHP() <= 0)
        std::cout << getName() << ": I can't bite anyone without health :(" << std::endl;
    else
    {
        setEnergy(getEnergy() - 1); 
        std::cout << getName() << ": bites " << target << " dealing " \
            << getDamage() << " damage! :)"<< std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (getHP() <= 0)
        std::cout << getName() << ": I'm already dead, stop hurting me! :(" << std::endl;
    else
    {
        std::cout << getName() << ": took " << amount << " damage :(" << std::endl;
        setHP(getHP() - amount);
        if (getHP() <= 0)
        {
            std::cout << getName() << ": did I just die? welp :(" << std::endl;
            setHP(0);
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergy() <= 0)
    {
        std::cout << getName() << ": I have no energy left to vaccinate myself :(" << std::endl;
    }
    else if (getHP() <= 0)
    {
        std::cout << getName() << ": Don't touch me, I got rabbies and Im dead anyways :(" << std::endl;
    }
    else
    {
        std::cout << getName() << ": Vaccinated myself against rabbies, dont worry :)" << std::endl;
        setEnergy(getEnergy() - 1);
        setHP(getHP() + amount);
    }
}
