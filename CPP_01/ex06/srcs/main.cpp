/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:22:02 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:22:04 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc == 2)
    {
        std::string value = argv[1];
        harl.complain(value);
    }
    else
        std::cout << "Harl accepts only 1 argument" << std::endl;
    return 0;
}