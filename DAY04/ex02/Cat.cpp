/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 13:16:31 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ()
{
    this->my_brean = new Brain;
    this->type = "Cat";
    std::cout << "Cat constructed!" << std::endl;
}

Cat::Cat(const std::string &type)
{
    this->my_brean = new Brain;
    this->type = type;
    std::cout << "Cat constructed!" << std::endl;
}

Cat::~Cat ()
{
    delete this->my_brean;
    std::cout << "Cat destructed!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete my_brean;
        this->my_brean = new Brain;
    }
    return (*this);
}

void Cat::makeSound ( void ) const
{
    std::cout << " Moew ! Moew ! " << std::endl;
}

std::string Cat::getType ( void ) const
{
    return (this->type);
}
