/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:27:23 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 14:10:36 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

std::string ft_parse_size(std::string str)
{
    while (str.size() <= 0)
    {
        std::cin >> str;
        if (str.size() > 10)
        {
            str.resize(10);
            str[9] = '.';
        }
    }
    return (str);
}

int main() 
{
    int index;
    PhoneBook book;
    std::string error, cmd, first_name, last_name, nickname, phone_number, darkest_secret;

    while (1)
    {
        std::cout << "Insert a command (ADD, SEARCH, or EXIT): ";
        std::cin >> cmd;
        if (cmd == "ADD")
        {
            std::cout << "First Name: ";
            first_name = ft_parse_size(first_name);
            std::cout << "Last Name: ";
            last_name = ft_parse_size(last_name);
            std::cout << "Nickname: ";
            nickname = ft_parse_size(nickname);
            std::cout << "Phone number: ";
            phone_number = ft_parse_size(phone_number);
            std::cout << "Darkest secret: ";
            darkest_secret = ft_parse_size(darkest_secret);

            book.addContact(first_name, last_name, nickname, phone_number, darkest_secret);

            first_name.clear(), last_name.clear(), nickname.clear() , phone_number.clear(), \
                darkest_secret.clear();
            std::cout << "Contact was created sucefully" << std::endl;
        }

        else if (cmd == "SEARCH")
        {
            std::cout << "------------------PhoneBook------------------" << std::endl;
            book.printContact();
            std::cout << "Insert an index: ";
            std::cin >> error;
            const char *z = error.c_str();
            index = std::atoi(z);
            if (index < 1 || index > 8)
                std::cout << "You inserted a index out of bounds" << std::endl;
            else
                book.printIndex(index - 1);
        }

        else if (cmd == "EXIT")
            break;
        else
            std::cout << "Insert a valid command" << std::endl;
    }
    std::cout << "Progam Exiting" << std::endl;
}
