/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:47:16 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/28 19:25:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap ()
{}

ClapTrap::ClapTrap (std::string name) : hitPoints (100), energyPoints (100), attackDamage (30)
{
    this->name = name;
    std::cout << "ClapTrap " << name << " constructed!" << std::endl;
}

ClapTrap::~ClapTrap ()
{
    std::cout << "ClapTrap " << name << " destructed!" << std::endl;
}

void    ClapTrap::attack (const std::string& target)
{
     if (energyPoints > 0 && hitPoints > 0) 
     {
        std::cout << "ClapTrap " << name << " attacks " << target 
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
     }
     else
         std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;   
}

void ClapTrap::takeDamage (unsigned int amount)
{
    hitPoints = (amount >= hitPoints) ? 0 : hitPoints - amount;
     std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired (unsigned int amount)
{
    if (energyPoints > 0 && hitPoints > 0) {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " repairs itself for " 
                  << amount << " hit points!" << std::endl;
    } else 
    {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair!" << std::endl;
    }
}
