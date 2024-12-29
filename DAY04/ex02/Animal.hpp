/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:29:40 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/30 00:04:33 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

#include <sstream>
#include <iostream>

class Animal 
{
    protected :
        std::string type;
    public :
        Animal();
        virtual ~Animal();
        Animal(std::string type);
        virtual void makeSound( void ) = 0;
        std::string get_type ( void ) const;
};

#endif