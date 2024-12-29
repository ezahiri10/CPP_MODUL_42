/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 18:11:36 by ezahiri          ###   ########.fr       */
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
    std::cout << " sound of Cats " << std::endl;
}

std::string Cat::get_type ( void ) const
{
    return (this->type);
}
