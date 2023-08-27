/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:13:05 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 17:45:37 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed(int const _point_Int)
{
    std::cout << "Int constructor called " << std::endl;
    _point = _point_Int << _bits;
    //_point = int(_point_Int);
}

//rounds a floating number to the nearest integer
//multiples the floating-point by 256(integer value 8 bit = 256(255)), rounding the result to an integer

Fixed::Fixed(float const _point_Float)
{
    std::cout << "Float constructor called " << std::endl;
    _point = roundf(_point_Float * (1 << _bits));
    //_point = roundf(_point_Float * 256);
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Parametric constructor called " << std::endl;
    *this = src;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();

    return (o);
}

Fixed Fixed::operator+(const Fixed &a) const
{
    std::cout << "+ arithmetic operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    return (this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(const Fixed &a) const
{
    std::cout << "- arithmetic operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    return (this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(const Fixed &a) const
{
    std::cout << "* arithmetic operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    return (this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed &a) const
{
    std::cout << "/ arithmetic operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    return (this->toFloat() / a.toFloat());
}

bool Fixed::operator==(const Fixed& a) const
{
    std::cout << "== comparison operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    if (this->toFloat() == a.toFloat())
        return (1);
    return (0);
}

bool Fixed::operator!=(const Fixed& a) const
{
    std::cout << "!= comparison operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    if (this->toFloat() != a.toFloat())
        return (1);
    return (0);
}

bool Fixed::operator<(const Fixed& a) const
{
    std::cout << "< comparison operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    if (this->toFloat() < a.toFloat())
        return (1);
    return (0);
}

bool Fixed::operator>(const Fixed& a) const
{
    std::cout << "> comparison operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    if (this->toFloat() > a.toFloat())
        return (1);
    return (0);
}

bool Fixed::operator<=(const Fixed& a) const
{
    std::cout << "<= comparison operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    if (this->toFloat() <= a.toFloat())
        return (1);
    return (0);
}

bool Fixed::operator>=(const Fixed& a) const
{
    std::cout << ">= comparison operator called with the values " << this->toFloat() << " and " << a.toFloat() << std::endl;
    if (this->toFloat() >= a.toFloat())
        return (1);
    return (0);
}

Fixed& Fixed::operator++()
{
    std::cout << "++ pre-increment operator"<< std::endl;
    ++_point;
    return (*this);
}

Fixed& Fixed::operator--()
{
    std::cout << "-- pre-decrement operator"<< std::endl;
    --_point;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed now = *this;

    std::cout << "++ post-increment operator"<< std::endl;
    ++(*this);
    return (now);
}

Fixed Fixed::operator--(int)
{
    Fixed now = *this;

    std::cout << "-- post-decrement operator"<< std::endl;
    --(*this);
    return (now);
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "= Assignment constructor called " << std::endl;
    _point = rhs._point;

    return *this;
}

Fixed &Fixed::max(Fixed &r1, Fixed &r2)
{
    if (r1._point > r2._point) 
        return (r1);
    return (r2);
}

Fixed &Fixed::min(Fixed &r1, Fixed &r2)
{
    if (r1._point < r2._point)
        return (r1);
    return (r2);
}

Fixed const &Fixed::max(Fixed const &r1, Fixed const &r2)
{
    if (r1._point > r2._point) 
        return (r1);
    return (r2);
}

Fixed const &Fixed::min(Fixed const &r1, Fixed const &r2)
{
    if (r1._point < r2._point)
        return (r1);
    return (r2);
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

float Fixed::toFloat(void) const
{
    return (roundf((float)_point) / (1 << _bits));
}

int Fixed::toInt(void) const
{
    return (_point >> _bits);
}
