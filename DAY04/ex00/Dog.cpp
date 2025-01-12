/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:41:41 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 10:53:45 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string type)
{
    this->type = type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog ()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound ( void ) const
{
    std::cout << "Wouf Wouf" << std::endl;
}

std::string Dog::getType ( void ) const
{
    return (this->type);
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    *this = cpy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
    this->type = cpy.getType();
    return (*this);
}


