/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:41:41 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 21:55:29 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ()
{
    this->type = "Dog";    
}

Dog::Dog(std::string type)
{
    this->type = type;
}

Dog::~Dog (){}

void Dog::makeSound ( void )
{
    std::cout << " sound of Dogs " << std::endl;
}

std::string Dog::get_type ( void ) const
{
    return (this->type);
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    *this = cpy;
}

Dog &Dog::operator=(const Dog &cpy)
{
    this->type = cpy.get_type();
    return (*this);
}


