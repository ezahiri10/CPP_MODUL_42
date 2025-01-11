/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 22:21:21 by ezahiri          ###   ########.fr       */
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
    std::cout << "woof woof" << std::endl;
}

std::string Dog::get_type ( void ) const
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
        delete my_brean;
        this->my_brean = new Brain;
    }
    return (*this);
}
