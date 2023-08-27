/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:13:12 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 17:29:15 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*
int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}*/

int main(void)
{
    Fixed a(10);
    Fixed b(2);

    Fixed const c(22);
    Fixed const d(26.25f);

    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << Fixed::min( c, d ) << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::max( c, d ) << std::endl;

    std::cout << "\n---------------ARITHMETIC OPERATORS---------------\n" << std::endl;

    Fixed z = a + b;
    std::cout << z << std::endl;
    z = a - b;
    std::cout << z << std::endl;
    z = a * b;
    std::cout << z << std::endl;
    z = a / b;
    std::cout << z << std::endl;

    std::cout << "\n---------------COMPARISON OPERATORS---------------\n" << std::endl;

    z = 5;
    if (z == 5)
        std::cout << "== true" << std::endl;
    if (z != 4)
        std::cout << "!= true" << std::endl;
    if (z > 1)
        std::cout << "> true" << std::endl;
    if (z < 6)
        std::cout << "< true" << std::endl;
    if (z <= 5)
        std::cout << "<= true" << std::endl;
    if (z >= 4)
        std::cout << ">= true" << std::endl;

    std::cout << "\n---------------INCRE/DECRE OPERATORS---------------\n" << std::endl;
    
    Fixed n;

    std::cout << n << std::endl;
    std::cout << ++n << std::endl;
    std::cout << n << std::endl;
    std::cout << n++ << std::endl;
    std::cout << n << std::endl;

    return 0;
}
