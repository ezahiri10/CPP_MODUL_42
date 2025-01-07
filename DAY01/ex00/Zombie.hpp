/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:11:30 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/03 19:41:33 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Zombie
{
    private :
        std::string name;
    public :
        void announce( void );
        Zombie (std::string n);
        ~Zombie (void);
    
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );