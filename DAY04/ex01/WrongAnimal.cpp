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
    this->type = "WrongAnimal";    
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
}

WrongAnimal::~WrongAnimal (){}

void WrongAnimal::makeSound ( void )
{
    std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::get_type ( void ) const
{
    return (this->type);
}

WrongAnimal::WrongAnimal(WrongAnimal const & WrongAnimal)
{
    *this = WrongAnimal;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & WrongAnimal)
{
    this->type = WrongAnimal.type;
    return (*this);
}

