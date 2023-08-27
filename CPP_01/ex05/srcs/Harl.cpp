/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:21:35 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:21:37 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void Harl::DEBUG(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::INFO(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::WARNING(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::ERROR(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::invalid(void)
{
    std::cout << "Harl can't understand this complaint" << std::endl;
}

void Harl::complain(std::string level)
{
    int index;

    index = 4;
    while (level == "DEBUG")
    {
        index = 0;
        break;
    }
    while (level == "INFO")
    {
        index = 1;
        break;
    }
    while (level == "WARNING")
    {
        index = 2;
        break;
        }
    while (level == "ERROR")
    {
        index = 3;
        break;
    }
    (this->*levels[index])();
}

Harl::Harl(void) 
{
    levels[0] = &Harl::DEBUG;
    levels[1] = &Harl::INFO;
    levels[2] = &Harl::WARNING;
    levels[3] = &Harl::ERROR;
    levels[4] = &Harl::invalid;
}
