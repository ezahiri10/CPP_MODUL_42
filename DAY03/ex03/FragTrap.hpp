/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 12:58:46 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 14:56:35 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap ();
        ~FragTrap ();
        FragTrap (const FragTrap &other);
        FragTrap &operator= (const FragTrap &other); 
        FragTrap (const std::string &name);
        void highFivesGuys();
};
