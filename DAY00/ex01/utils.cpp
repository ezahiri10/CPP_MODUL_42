/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:14:59 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/22 15:00:00 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

long Atoi (std::string s)
{
    long    res = 0;
    int     i = 0;
    int     sign = 1;

    if(s.empty())
        return (-1);
    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (s[i] != '\0')
    {
        if (s[i] < '0' || s[i] > '9')
            return (-1);
        if (res > 100)
            return (-1);
        res = res * 10 + s[i] - '0';
        i++;
    }
    return (res * sign);
}

bool IsOnlySpaces(std::string s)
{
    if (s[0] == 0)
        return (true);
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] != ' ')
        {
            return (false);
        }
    }
    return (true);
}

bool    IsPrintable(std::string s)
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] < 32 || s[i] > 126)
        {
            return (false);
        }
    }
    return (true);
}

bool    IsNumber(std::string s)
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            std::cout << "Invalid phone number\n";
            return (false);
        }
    }
    return (true);
}

bool   CheckInput (std::string s)
{
    if (IsOnlySpaces (s) == true || s.empty() == true || IsPrintable(s) == false)
    {
        std::cout << RED << "Invalid input" << RESET << std::endl;
        return (false);
    }
    return (true);
}
