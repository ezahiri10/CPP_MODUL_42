/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:10:49 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/06 17:47:10 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::set_size(int i)
{
    size = i;
}

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
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw (10) << FixedLength (contacts[i].GetFirstName()) << "|";
        std::cout << std::setw (10) << FixedLength (contacts[i].GetLastName()) << "|";
        std::cout << std::setw (10) << FixedLength (contacts[i].GetNickName()) << std::endl;
    }
}

void PhoneBook::AddContact(Contact add)
{
    contacts[index] = add;
    index++;
    if (size != 8)
        size++;
    if (index == 8)
        index = 0;
}
