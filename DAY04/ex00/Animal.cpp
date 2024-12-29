/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:32:41 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 18:11:56 by ezahiri          ###   ########.fr       */
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
    std::cout << " sound of any Animal " << std::endl;
}

std::string Animal::get_type ( void ) const
{
    return (this->type);
}


