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

DiamondTrap::DiamondTrap (const std::string &name) : ClapTrap (name + "_clap_name")
{
    DiamondTrap::name = name;
    std::cout << "DiamondTrap " << name << " constructed!" << std::endl; 
}

DiamondTrap::~DiamondTrap ()
{
    std::cout << "DiamondTrap" << this->name << "Has been created" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << name 
              << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &other) : ClapTrap (other), ScavTrap (other), FragTrap (other)  
{
    *this = other;
}

DiamondTrap & DiamondTrap::operator= (const DiamondTrap &other) 
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return (*this);
}