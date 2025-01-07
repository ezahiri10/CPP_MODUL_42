/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:08:11 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/28 23:14:33 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTAP 
#define CLAPTAP

#include <iostream>

class ClapTrap
{
    protected :
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public :
        ClapTrap (std::string name);
        ClapTrap ();
        ~ClapTrap ();
        ClapTrap (const ClapTrap &other);
        ClapTrap &operator= (const ClapTrap &other); 
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);       
};

#endif