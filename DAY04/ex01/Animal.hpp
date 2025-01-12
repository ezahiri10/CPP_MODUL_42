/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:29:40 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 12:16:31 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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
        virtual void makeSound( void ) const;
        virtual std::string getType ( void ) const;
};

#endif