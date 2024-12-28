/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 18:58:25 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/28 19:26:12 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ()
{};

FragTrap::FragTrap (std::string name) : ClapTrap (name)
{
    std::cout << "FragTrap "  << " constructed!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap "  << " destructed!" << std::endl;
}

void FragTrap::highFivesGuys ( void )
{
    std::cout << "------ HIgHt  FIVE   GUYZ -----" << std::endl;
}





