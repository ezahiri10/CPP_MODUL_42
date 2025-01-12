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
    std::cout << "WrongAnimal Constructor called" << std::endl;
    this->type = "WrongAnimal";    
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::~WrongAnimal ()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound ( void ) const
{
    std::cout << " sound of any WrongAnimal " << std::endl;
}

std::string WrongAnimal::getType ( void ) const
{
    return (this->type);
}

WrongAnimal::WrongAnimal(WrongAnimal const & WrongAnimal)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = WrongAnimal;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & WrongAnimal)
{
    this->type = WrongAnimal.type;
    return (*this);
}
