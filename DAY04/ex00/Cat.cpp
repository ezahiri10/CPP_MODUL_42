/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 10:57:07 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;  
}

Cat::Cat(std::string type)
{
    this->type = type;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat ()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound ( void ) const
{
    std::cout << "Miaou Miaou" << std::endl;
}

std::string Cat::getType ( void ) const
{
    return (this->type);
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cpy;
}

Cat &Cat::operator=(const Cat &cpy)
{
    this->type = cpy.getType();
    return (*this);
}
