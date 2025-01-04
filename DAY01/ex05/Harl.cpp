/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:33:28 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/04 15:31:13 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug ( void )
{
    std::cout << "[ ERROR ] ";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; 
}

void Harl::info ( void )
{
    std::cout << "[ INFO ] ";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"  << std::endl;
}

void Harl::warning ( void )
{
    std::cout << "[ WARNING ] ";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error ( void )
{
    std::cout << "[ INFO ] ";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain (std::string level)
{
    std::string levels[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};
    
    void (Harl::*f_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::info, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
           (this->*f_ptr[i])();
            return ;
        }
    }
    std::cout << "Unknown level" << std::endl;
}
