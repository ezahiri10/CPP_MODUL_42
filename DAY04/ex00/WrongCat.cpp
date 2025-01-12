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
    std::cout << "WrongCat Constructor called" << std::endl;
    this->type = "WrongCat";    
}

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat Constructor called" << std::endl;
    this->type = type;
}

WrongCat::~WrongCat ()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound ( void ) const
{
    std::cout << " sound of WrongCats " << std::endl;
}

std::string WrongCat::getType ( void ) const
{
    return (this->type);
}

WrongCat::WrongCat(WrongCat const & other) : WrongAnimal(other)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = other;
}

WrongCat & WrongCat::operator=(WrongCat const & other)
{
    this->type = other.type;
    return (*this);
}