/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:19:22 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:19:25 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie 
{

private:
    std::string name;

public:
    Zombie(std::string name);
    Zombie();
    ~Zombie(void);
    void announce(void);
    void randomChump(std::string name);
    Zombie* newZombie(std::string name);

};

#endif