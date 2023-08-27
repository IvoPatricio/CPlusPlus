/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:20:41 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:20:43 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>

class HumanB
{
private:
    std::string _nameB;
    Weapon      *weapon;

public:
    HumanB(std::string _nameB);
    ~HumanB(void);
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif