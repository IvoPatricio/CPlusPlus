/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:14:36 by ifreire-          #+#    #+#             */
/*   Updated: 2023/07/01 08:14:37 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "../includes/ClapTrap.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap();
    FragTrap &operator=(FragTrap const &rhs);

    void attack(const std::string& target);
    void highFivesGuys();
};

#endif
