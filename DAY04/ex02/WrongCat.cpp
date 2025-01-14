/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:44:31 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 18:57:27 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat ()
{
    this->type = "WrongCat";    
}

WrongCat::WrongCat(std::string type)
{
    this->type = type;
}

WrongCat::~WrongCat (){}

void WrongCat::makeSound ( void )
{
    std::cout << " sound of WrongCats " << std::endl;
}

std::string WrongCat::getType ( void ) const
{
    return (this->type);
}
