/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 12:58:46 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 13:27:28 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap ();
        ~FragTrap ();
        FragTrap (const FragTrap &other);
        FragTrap &operator= (const FragTrap &other); 
        FragTrap (std::string name);
        void highFivesGuys();
};

#endif