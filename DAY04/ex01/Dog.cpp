/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 12:20:24 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ()
{
    std::cout << "Dog constructed!" << std::endl;
    this->my_brean = new Brain;
    this->type = "Dog";    
}

Dog::Dog(std::string type)
{
    std::cout << "Dog constructed!" << std::endl;
    this->my_brean = new Brain;
    this->type = type;
}

Dog::~Dog ()
{
    delete this->my_brean;
    std::cout << "Dog destructed!" << std::endl;
}


void Dog::makeSound ( void ) const
{
    std::cout << "woof woof" << std::endl;
}

std::string Dog::getType ( void ) const
{
    return (this->type);
}

Dog::Dog(Dog const &cpy) : Animal(cpy)
{
    this->my_brean = new Brain;
    this->type = cpy.type;
}

Dog &Dog::operator=(Dog const &other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->my_brean;
        this->my_brean = new Brain;
    }
    return (*this);
}
