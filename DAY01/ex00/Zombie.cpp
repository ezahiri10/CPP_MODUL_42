/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:22:47 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/12 20:04:00 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 void Zombie::announce( void )
 {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
 }

Zombie::~Zombie ()
{
    std::cout << name << " has been destroyed" << std::endl;
}

Zombie::Zombie() {};

Zombie::Zombie (std::string n) : name (n) {};