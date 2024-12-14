/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:40:01 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/14 22:43:58 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string n, Weapon &w) : name (n), my_weapon (w) {}

void HumanA::attack ( void )
{
    std::cout << name << " attacks with their " << my_weapon.getType () << std::endl;
}
