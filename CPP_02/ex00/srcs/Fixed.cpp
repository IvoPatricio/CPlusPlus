/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:12:21 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 17:12:23 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _point(0)
{
    std::cout <<"Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Parametric constructor called" << std::endl;
    *this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout <<"Copy Assignment constructor called" << std::endl;
    if (this != &rhs)
        this->_point = rhs.getRawBits();

    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called --- value changed" << std::endl;
    
    this->_point = raw;
}

std::ostream &  operator<<(std::ostream & o, Fixed const & i)
{
    o << i.getRawBits();

    return (o);
}

