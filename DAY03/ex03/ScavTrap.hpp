/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 23:12:32 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 14:56:52 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap ();
        ~ScavTrap ();
        ScavTrap (const ScavTrap &other);
        ScavTrap &operator= (const ScavTrap &other); 
        ScavTrap (std::string name);
        void guardGate();
        void attack(const std::string& target);
};
