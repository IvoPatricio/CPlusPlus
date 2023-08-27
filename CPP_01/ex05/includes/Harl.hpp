/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:21:29 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:21:31 by ifreire-         ###   ########.fr       */
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
    //the type of a pointer to a function to create array levels[5]
    typedef void (Harl::*LevelFunction)();
    LevelFunction levels[5];
    void DEBUG();
    void INFO();
    void WARNING();
    void ERROR();
    void invalid();
    
public:
    Harl(void);
    void complain(std::string level);
};

#endif