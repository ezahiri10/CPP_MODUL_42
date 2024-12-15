/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:55:00 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/15 12:01:33 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *my_weapon;
    public :
        HumanB (std::string n);
        void setWeapon(Weapon &w);
        void attack ( void );
};