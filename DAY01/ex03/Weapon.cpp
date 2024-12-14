/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:13:47 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/14 22:20:46 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string t) : type (t) {}

const std::string& Weapon::getType ( void )
{
    return (type);
}

void Weapon::setType (std::string t)
{
    type = t;
}