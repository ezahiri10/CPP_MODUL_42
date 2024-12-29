/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:39:13 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 14:55:16 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ()
{}

DiamondTrap::DiamondTrap (std::string name) : ClapTrap (name + "_clap_name")
{
    this->name = name;
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " constructed!" << std::endl; 
}

DiamondTrap::~DiamondTrap ()
{
    std::cout << "DiamondTrap" << this->name << "Has been created" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack (target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << name 
              << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}