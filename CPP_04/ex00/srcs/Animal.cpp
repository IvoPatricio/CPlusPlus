/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:25:24 by ifreire-          #+#    #+#             */
/*   Updated: 2023/06/30 20:39:25 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

Animal::Animal(void) : type("Animal")
{
    std::cout << getType() << " Default Constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << getType() << " Copy constructor called" << std::endl;
    type = src.type;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << getType() <<" Assignment constructor called " << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << getType() << " Destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Weird noise" << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}
