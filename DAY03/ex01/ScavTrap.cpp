/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 23:23:11 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/28 23:57:47 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (){}

ScavTrap::ScavTrap(std::string name) : ClapTrap (name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap ()
{
    std::cout << "ScavTrap " << name << " destructed!" << std::endl;
}

void ScavTrap::guardGate ( void )
{
    std::cout << "ScavTrap " << name << " requests a high five!" << std::endl;    
}

// void    ClapTrap::attack (const std::string& target)
// {
//      if (energyPoints > 0 && hitPoints > 0) 
//      {
//         std::cout << "ScavTrap " << name << " attacks " << target 
//                   << ", causing " << attackDamage << " points of damage!" << std::endl;
//         energyPoints--;
//      }
//      else
//          std::cout << "ScavTrap " << name << " has no energy or hit points left to attack!" << std::endl;   
// }

// void ClapTrap::takeDamage (unsigned int amount)
// {
//     hitPoints = (amount >= hitPoints) ? 0 : hitPoints - amount;
//      std::cout << "ScavTrap " << name << " takes " << amount << " points of damage!" << std::endl;
// }

// void ClapTrap::beRepaired (unsigned int amount)
// {
//     if (energyPoints > 0 && hitPoints > 0) {
//         hitPoints += amount;
//         energyPoints--;
//         std::cout << "ScavTrap " << name << " repairs itself for " 
//                   << amount << " hit points!" << std::endl;
//     } else 
//     {
//         std::cout << "ScavTrap " << name << " has no energy or hit points left to repair!" << std::endl;
//     }
// }




