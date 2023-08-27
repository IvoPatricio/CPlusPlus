/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:27:11 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 13:27:13 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class PhoneBook 
{
private:
    Contact contacts[8];
    int count;
    int booksize;

public:
    PhoneBook();
    ~PhoneBook();
    void addContact(std::string name, std::string last, std::string nickname, std::string phone, std::string secret);
    void printContact();
    void printIndex(int i);
};

#endif