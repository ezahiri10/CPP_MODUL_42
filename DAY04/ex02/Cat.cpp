/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/12 12:16:42 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ()
{
    this->my_brean = new Brain;
    this->type = "Cat";    
}

Cat::Cat(std::string type)
{
    this->my_brean = new Brain;
    this->type = type;
}

Cat::~Cat ()
{
    delete this->my_brean;
    std::cout << "Cat destructed!" << std::endl;
}

Cat &Cat::operator=(Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete my_brean;
        this->my_brean = new Brain;
    }
    return (*this);
}
void Cat::makeSound ( void )
{
    std::cout << " Moew ! Moew ! " << std::endl;
}

std::string Cat::getType ( void ) const
{
    return (this->type);
}
