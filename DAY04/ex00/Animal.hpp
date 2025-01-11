/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:29:40 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 21:49:05 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal 
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        Animal(std::string type);
        virtual void makeSound( void );
        std::string get_type ( void ) const;
};

#endif