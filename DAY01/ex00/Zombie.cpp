/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:22:47 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/03 20:23:43 by ezahiri          ###   ########.fr       */
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

Zombie::Zombie (std::string n)
{
    name = n;
}