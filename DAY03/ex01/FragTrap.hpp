/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 18:53:16 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/28 18:57:33 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap ();
        FragTrap (std::string name);
        ~FragTrap ();
        void highFivesGuys(void);
};

