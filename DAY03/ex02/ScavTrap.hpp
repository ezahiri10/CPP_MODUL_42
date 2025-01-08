/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 23:12:32 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 12:33:49 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap ();
        ~ScavTrap ();
        ScavTrap (std::string name);
        ScavTrap (const ScavTrap &other);
        ScavTrap &operator= (const ScavTrap &other); 
        void guardGate();
        void attack(const std::string& target);
};

#endif