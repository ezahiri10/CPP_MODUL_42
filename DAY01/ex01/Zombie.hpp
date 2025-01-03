/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:11:30 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/03 20:01:31 by ezahiri          ###   ########.fr       */
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
        void get_name (std::string n);
        ~Zombie (void);
    
};

Zombie* zombieHorde( int N, std::string name );