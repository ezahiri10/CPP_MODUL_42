/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:29:40 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 12:16:41 by ezahiri          ###   ########.fr       */
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
        Animal(Animal const &cpy);
        Animal &operator=(Animal const &affect);
        virtual ~Animal();
        Animal(std::string type);
        virtual void makeSound( void ) = 0;
        std::string getType ( void ) const;
};

#endif