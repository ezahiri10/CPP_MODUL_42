/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 12:16:44 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ()
{
    this->my_brean = new Brain;
    this->type = "Dog";    
}

Dog::Dog(std::string type)
{
    this->my_brean = new Brain;
    this->type = type;
}

Dog::~Dog ()
{
    delete this->my_brean;
    std::cout << "Dog destructed!" << std::endl;
}

Dog &Dog::operator=(Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete my_brean;
        this->my_brean = new Brain;
    }
    return (*this);
}
void Dog::makeSound ( void )
{
    std::cout << " hw ! Hhhhhhh ! " << std::endl;
}

std::string Dog::getType( void ) const
{
    return (this->type);
}
