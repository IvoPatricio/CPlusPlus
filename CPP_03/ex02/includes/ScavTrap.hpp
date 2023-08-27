/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:14:41 by ifreire-          #+#    #+#             */
/*   Updated: 2023/07/01 08:14:41 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "../includes/ClapTrap.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();
    ScavTrap &operator=(ScavTrap const &rhs);

    void attack(const std::string& target);
    void guardGate();
};

#endif
