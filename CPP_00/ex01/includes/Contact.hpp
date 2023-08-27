/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:27:04 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 13:27:06 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact
{
private:
    std::string name;
    std::string last;
    std::string nickname;
    std::string phone;
    std::string secret;

public:
//(){} will initialize the 8 contacts objects with default constructor values -- PhoneBook Contact contacts(8)
    Contact(){}
    Contact(std::string name, std::string last, std::string nickname, std::string phone, std::string secret);
    ~Contact(void);
    std::string getName();
    std::string getLast();
    std::string getNickname();
    std::string getPhone();
    std::string getSecret();
};

#endif