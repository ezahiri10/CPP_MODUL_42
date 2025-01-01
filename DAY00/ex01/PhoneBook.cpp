/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:10:49 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/01 20:09:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

void PhoneBook::set_index(int i)
{
    index = i;
}

int PhoneBook::get_size()
{
    return (size);
}

Contact  PhoneBook::GetContact(int i)
{
    return (contacts[i]);
}

std::string FixedLength(std::string s)
{
    if (s.length() > 10)
    {
        s.resize(9);
        s += ".";
    }
    return (s);
}

void   PhoneBook::ShowAll()
{
    std::cout << GREEN << "---------------------------------------------" << std::endl;
    std::cout << "|     Index|First Name| Last Name| Nick Name|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << "|" << YELLOW << std::setw(10) << i << GREEN << "|";
        std::cout << YELLOW <<  std::setw(10) << FixedLength(contacts[i].GetFirstName()) << GREEN << "|";
        std::cout << YELLOW <<  std::setw(10) << FixedLength(contacts[i].GetLastName()) << GREEN << "|";
        std::cout << YELLOW <<  std::setw(10) << FixedLength(contacts[i].GetNickName()) << GREEN << "|" << std::endl;
    }
    std::cout << GREEN << "---------------------------------------------" << RESET << std::endl;
}

void PhoneBook::AddContact(Contact add)
{
    contacts[index] = add;
    index++;
    if (size != MAX_CONTACT)
        size++;
    if (index == MAX_CONTACT)
        index = 0;
}

void PhoneBook::ShowContact (int i)
{
    std::cout << YELLOW << "First name : " << RESET << contacts[i].GetFirstName() << std::endl;
    std::cout << YELLOW << "Last name : " << RESET << contacts[i].GetLastName() << std::endl;
    std::cout << YELLOW << "Nick name : " << RESET << contacts[i].GetNickName() << std::endl;
    std::cout << YELLOW << "Phone number : " << RESET << contacts[i].GetNbrTele() << std::endl;
    std::cout << YELLOW << "Secret : " << RESET << contacts[i].GetSecret() << std::endl;
}

PhoneBook&  PhoneBook::getInstance ()
{
    static PhoneBook c;
    return (c);
}
