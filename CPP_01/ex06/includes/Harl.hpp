/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:21:49 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:21:50 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <functional>


class Harl 
{
private:
    typedef void (Harl::*LevelFunction)();
    LevelFunction levels[5];
    void DEBUG(void);
    void INFO(void);
    void WARNING(void);
    void ERROR(void);
    void invalid(void);
    
public:
    Harl(void);
    void complain(std::string level);
};

#endif