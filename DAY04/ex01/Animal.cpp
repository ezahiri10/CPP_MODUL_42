/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:32:41 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 12:16:31 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ()
{
    this->type = "Animal";    
}

Animal::Animal(std::string type)
{
    this->type = type;
}

Animal::~Animal (){}

void Animal::makeSound ( void ) const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType ( void ) const
{
    return (this->type);
}

Animal::Animal(Animal const &cpy)
{
    *this = cpy;
}

Animal &Animal::operator=(Animal const &affect)
{
    this->type = affect.type;
    return (*this);
}

