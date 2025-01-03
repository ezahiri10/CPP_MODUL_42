/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:55:00 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/03 21:17:49 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

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

#endif