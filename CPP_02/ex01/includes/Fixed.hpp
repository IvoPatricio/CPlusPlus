/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:12:35 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 17:12:39 by ifreire-         ###   ########.fr       */
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

    Fixed &operator=(Fixed const &rhs);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i);

#endif