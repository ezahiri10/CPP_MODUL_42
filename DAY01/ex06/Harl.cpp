/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:09:12 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/04 15:45:40 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void Harl::debug ( void )
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";  
}

void Harl::info ( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" ; 
}

void Harl::warning ( void )
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"; 
}

void Harl::error ( void )
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n"; 
}

int GetLevel(std::string &level)
{
    std::string levels[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            return (i + 1);
    }
    return (-1);
}

void Harl::complain (std::string level)
{
    int level_id;
    std::string levels[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};
    level_id = GetLevel (level);

    switch (level_id)
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

