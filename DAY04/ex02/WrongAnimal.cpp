/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:32:41 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 19:08:41 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "WrongAnimal";    
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal type constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::~WrongAnimal ()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound ( void ) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    this->type = src.getType();
    return (*this);
}