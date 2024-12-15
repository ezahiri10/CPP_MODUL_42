/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 12:01:58 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/15 12:05:36 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string n)
{
    name = n;
    my_weapon = NULL;
}

void HumanB::attack ( void )
{
    if (my_weapon)
        std::cout << name << " attacks with his " << my_weapon->getType() << std::endl;
    else
        std::cout << name << " attacks with his bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
    my_weapon = &w;
}