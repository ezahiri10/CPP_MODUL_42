/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:23:23 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/14 22:39:51 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon &my_weapon;
    public :
        HumanA (std::string n, Weapon &w);
        void attack ( void );
};