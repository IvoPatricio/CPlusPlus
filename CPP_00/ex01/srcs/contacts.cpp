/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:27:18 by ifreire-          #+#    #+#             */
/*   Updated: 2023/03/23 13:27:20 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

Contact::Contact(std::string name, std::string last, std::string nickname, std::string phone, std::string secret) \
    : name(name), last(last), nickname(nickname), phone(phone), secret(secret)
{
    std::cout << name << " " << last << " Contact Constructor called" << std::endl;
}

Contact::~Contact(void)
{
    std::cout << name << " " << last << " Contact Destructor called" << std::endl;
}

std::string Contact::getName(void)
{
    return (name);
}
std::string Contact::getLast(void)
{
    return (last);
}
std::string Contact::getNickname(void)
{
    return (nickname);
}

std::string Contact::getPhone(void)
{
    return (phone);
}

std::string Contact::getSecret(void)
{
    return (secret);
}
