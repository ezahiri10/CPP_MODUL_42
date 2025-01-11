/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:32:41 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 22:20:38 by ezahiri          ###   ########.fr       */
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

void Animal::makeSound ( void )
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::get_type ( void ) const
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

