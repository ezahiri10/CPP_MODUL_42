/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 13:20:06 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ()
{
    std::cout << "Dog constructed!" << std::endl;
    this->my_brean = new Brain;
    this->type = "Dog";    
}

Dog::Dog(const std::string &type)
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

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->my_brean;
        this->my_brean = new Brain;
    }
    return (*this);
}
void Dog::makeSound ( void ) const
{
    std::cout << "Wouf Wouf!" << std::endl;
}

std::string Dog::getType( void ) const
{
    return (this->type);
}
