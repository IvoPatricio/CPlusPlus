/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:20:35 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:20:37 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>

class HumanA
{
private:
    std::string _nameA;
    Weapon& weapon;

public:
    HumanA(std::string _nameA, Weapon& weapon);
    ~HumanA(void);
    void attack();
};

#endif
