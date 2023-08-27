/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:21:20 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 16:43:13 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        char s1 = argv[2][0];
        char s2 = argv[3][0];

        std::string line;
        std::ifstream   in_file(argv[1]);
        std::strcat(argv[1], ".replace");
        std::ofstream   out_file(argv[1]);
        int i = 0;
        if (in_file && out_file)
        {
            while (std::getline(in_file, line)) 
            {
                while (line[i])
                {
                    if (line[i] == s1)
                        line[i] = s2;
                    i++;
                }
                out_file << line << std::endl;
                i = 0;
            }
        }
        out_file.close();
        in_file.close();
    }
    else
        std::cout << "Error" << std::endl;
    return (0);
}