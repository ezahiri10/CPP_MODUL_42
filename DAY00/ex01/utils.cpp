/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:14:59 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/30 22:43:05 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

bool IsOnlySpaces(std::string &s)
{
    if (s[0] == 32)
        return (true);
    for (int i = 0; s[i] != 0; i++)
    {
        if (std::isspace(s[i]) == false)
            return (false);
    }
    return (true);
}

bool    IsPrintable(std::string &s)
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (std::isprint(s[i]) == false)
            return (false);
    }
    return (true);
}

bool    IsNumber(std::string &s)
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (std::isdigit(s[i]) == false)
        {
            std::cout << "Invalid phone number\n";
            return (false);
        }
    }
    return (true);
}

bool   CheckInput (std::string &s)
{
    if (IsOnlySpaces (s) == true || s.empty() == true || IsPrintable(s) == false)
    {
        std::cout << RED << "Invalid input" << RESET << std::endl;
        return (false);
    }
    return (true);
}
