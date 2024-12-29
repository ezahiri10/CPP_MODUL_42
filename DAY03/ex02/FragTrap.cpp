/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:02:18 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 13:09:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (){}

FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::~FragTrap ()
{
    std::cout << "FragTrap " << name << " destructed!" << std::endl;
}

void FragTrap::highFivesGuys ()
{
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}