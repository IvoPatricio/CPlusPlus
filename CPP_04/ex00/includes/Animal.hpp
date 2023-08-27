/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:23:44 by ifreire-          #+#    #+#             */
/*   Updated: 2023/06/30 20:23:47 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

//virtual functions to ensure that the correct function is called for an object, regardless of the reference type used to call the function.

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal const &src);
    virtual ~Animal();
    Animal &operator=(Animal const &rhs);

    virtual void makeSound() const;
    std::string getType() const;
};

#endif
