/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:32:41 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 12:58:55 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ()
{
    this->type = "Animal";
    std::cout << "Animal Default constructor called" << std::endl;  
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal Parametric constructor called" << std::endl;
}

Animal::~Animal ()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType ( void ) const
{
    return (this->type);
}

Animal::Animal(Animal const &cpy)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = cpy;
}

Animal &Animal::operator=(Animal const &affect)
{
    this->type = affect.type;
    return (*this);
}

