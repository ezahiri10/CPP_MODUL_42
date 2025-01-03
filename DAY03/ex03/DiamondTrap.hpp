/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:30:26 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 14:57:39 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        std::string name;
    public :
        DiamondTrap (std::string name);
        DiamondTrap ();
        ~DiamondTrap ();
        void whoAmI( void );
        void attack(const std::string& target);
};