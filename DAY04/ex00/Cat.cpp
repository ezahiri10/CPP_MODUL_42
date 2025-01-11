/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 21:55:19 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ()
{
    this->type = "Cat";    
}

Cat::Cat(std::string type)
{
    this->type = type;
}

Cat::~Cat (){}

void Cat::makeSound ( void )
{
    std::cout << "Miaou Miaou" << std::endl;
}

std::string Cat::get_type ( void ) const
{
    return (this->type);
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
    *this = cpy;
}

Cat &Cat::operator=(const Cat &cpy)
{
    this->type = cpy.get_type();
    return (*this);
}
