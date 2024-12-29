/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:41:41 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 18:11:28 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ()
{
    this->type = "Dog";    
}

Dog::Dog(std::string type)
{
    this->type = type;
}

Dog::~Dog (){}

void Dog::makeSound ( void )
{
    std::cout << " sound of Dogs " << std::endl;
}

std::string Dog::get_type ( void ) const
{
    return (this->type);
}


