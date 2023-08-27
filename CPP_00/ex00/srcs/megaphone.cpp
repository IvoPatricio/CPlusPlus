/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:26:40 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 13:49:31 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char **argv)
{
    int i;
    size_t x;

    x = 0;
    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (i < argc)
        {
            while (x < strlen(argv[i]))
            {
                std::cout << (char)(toupper(argv[i][x]));
                x++;
            }
            i++;
            x = 0;
        }
    }
    std::cout << std::endl;
    return 0;
}