/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:29:40 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 13:04:51 by ezahiri          ###   ########.fr       */
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
        Animal(std::string type);
        Animal(Animal const &cpy);
        Animal &operator=(Animal const &affect);
        virtual ~Animal();
        virtual void makeSound( void ) const = 0;
        std::string getType ( void ) const;
};

#endif