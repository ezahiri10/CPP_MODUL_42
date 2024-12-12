/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:11:30 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/12 21:47:21 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
class Zombie
{
    private :
        std::string name;
    public :
        void announce( void );
        Zombie ();
        void get_name (std::string n);
        ~Zombie (void);
    
};

Zombie* zombieHorde( int N, std::string name );