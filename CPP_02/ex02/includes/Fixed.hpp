/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:13:00 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 17:21:38 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int _point;
    static const int _bits = 8;

public:
    Fixed(void);
    Fixed(int const);
    Fixed(float const);
    Fixed(Fixed const &src);
    ~Fixed(void);

    Fixed operator+(const Fixed &a) const;
    Fixed operator-(const Fixed &a) const;
    Fixed operator*(const Fixed &a) const;
    Fixed operator/(const Fixed &a) const;

    bool operator==(const Fixed& a) const;
    bool operator!=(const Fixed& a) const;
    bool operator<(const Fixed& a) const;
    bool operator>(const Fixed& a) const;
    bool operator<=(const Fixed& a) const;
    bool operator>=(const Fixed& a) const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    Fixed &operator=(Fixed const &rhs);
    //Fixed &operator++(Fixed const &rhs1, Fixed const &rhs2);

    static Fixed& max(Fixed &r1, Fixed &r2);
    static Fixed& min(Fixed &r1, Fixed &r2);

    static const Fixed& max(Fixed const &r1, Fixed const &r2);
    static const Fixed& min(Fixed const &r1, Fixed const &r2);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif