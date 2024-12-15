/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:15:31 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/15 17:32:19 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int GetLevel(std::string level)
{
    std::string levels[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            return (i + 1);
    }
    return (-1);
}
int main (int ac , char **av)
{
    int level;

    if (ac  != 2)
    {
        std::cerr << "Invalid number of argument\n";
        return (1);
    }
    level = GetLevel (av[1]);
    switch (level)
    {
    case 1:
        debug ();
        info ();
        warning();
        error ();
        break ;
    case 2:
        info ();
        warning();
        error ();
        break ;
    case 3 :
        warning();
        error ();
        break ;
    case 4 :
         error ();
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    }
}