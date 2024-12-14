/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:09:25 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/14 22:17:57 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon (std::string t);
        const std::string& getType( void );
        void setType(std::string t);
};