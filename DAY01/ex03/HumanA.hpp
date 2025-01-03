/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:23:23 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/03 21:18:02 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

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

#endif