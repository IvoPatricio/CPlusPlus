/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:12:27 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 17:12:29 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class   Fixed
{
private:
    int _point;
    static const int _bits = 8;
public:
    Fixed(void);
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & rhs);
    ~Fixed(void);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i);

#endif