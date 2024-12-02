/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:57:42 by ezahiri           #+#    #+#             */
/*   Updated: 2024/11/29 21:13:54 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void        Contact::SetFirstName (std::string s)
{
    FirstName = s;
}

void        Contact::SetLastName (std::string s)
{
    LastName = s;
}

void        Contact::SetNickName (std::string s)
{
    NickName = s;
}

void      Contact::SetNbrTele (std::string s)
{
    NbrTele = s;
}

void      Contact::SetSecret (std::string s)
{
    secret  = s;
}

std::string Contact::GetFirstName ()
{
    return (FirstName);
}

std::string Contact::GetLastName ()
{
    return (LastName);
}

std::string Contact::GetNickName ()
{
    return (NickName);
}

std::string Contact::GetNbrTele()
{
    return (NbrTele);
}


