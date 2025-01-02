/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:57:42 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/02 14:41:17 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

void        Contact::SetFirstName (std::string &s)
{
    FirstName = s;
}

void        Contact::SetLastName (std::string &s)
{
    LastName = s;
}

void        Contact::SetNickName (std::string &s)
{
    NickName = s;
}

void      Contact::SetNbrTele (std::string &s)
{
    NbrTele = s;
}

void      Contact::SetSecret (std::string &s)
{
    secret  = s;
}

const std::string& Contact::GetFirstName ()
{
    return (FirstName);
}

const std::string& Contact::GetLastName ()
{
    return (LastName);
}

const std::string& Contact::GetNickName ()
{
    return (NickName);
}

const std::string& Contact::GetNbrTele()
{
    return (NbrTele);
}

const std::string& Contact::GetSecret()
{
    return (secret);
}

