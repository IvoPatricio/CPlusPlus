/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:27:30 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 13:27:34 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) : count(0), booksize(0)
{
    std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook Destructor called" << std::endl;
}

void PhoneBook::addContact(std::string name, std::string last, std::string nickname, std::string phone, std::string secret)
{
    if (count < 8)
    {
        contacts[count] = Contact(name, last, nickname, phone, secret);
        count++;
        if (count == 8)
        {
            booksize = 8;
            count = 0;
        }
    }
}

void PhoneBook::printContact()
{
    int i;

    i = 0;
    std::cout << "|  index   |first name|last  name| nickname |" << std::endl;
    while (i < 8)
    {
        std::cout << "|" << std::setw(10) << i+1 << "|" << std::setw(10) << contacts[i].getName() << "|" \
            << std::setw(10) << contacts[i].getLast() << "|" << std::setw(10) << contacts[i].getNickname() \
                << "|" << std::endl;
        i++;
    }
}

void PhoneBook::printIndex(int i)
{
    std::cout << "First Name: " << contacts[i].getName() << "\nLast Name: " << contacts[i].getLast() \
        << "\nNickname: " << contacts[i].getNickname() << "\nPhone number: " << contacts[i].getName() \
            << "\nDarkest secret: " << contacts[i].getSecret() << std::endl;
}