/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 22:21:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ()
{
    this->my_brean = new Brain;
    this->type = "Cat";    
}

Cat::Cat(const std::string &type)
{
    this->my_brean = new Brain;
    this->type = type;
}

Cat::~Cat ()
{
    delete this->my_brean;
    std::cout << "Cat destructed!" << std::endl; // !!
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

std::string Cat::get_type ( void ) const
{
    return (this->type);
}

Cat::Cat(const Cat &other) : Animal(other)
{
    this->type = other.type;
    this->my_brean = new Brain;
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
