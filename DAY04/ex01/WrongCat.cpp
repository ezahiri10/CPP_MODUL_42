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
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = type;
}

WrongCat::~WrongCat ()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound ( void ) const
{
    std::cout << "WrongCat Sound" << std::endl;
}

std::string WrongCat::getType ( void ) const
{
    return (this->type);
}

WrongCat::WrongCat(WrongCat const & WrongCat) : WrongAnimal(WrongCat)
{
    *this = WrongCat;
}

WrongCat &WrongCat::operator=(WrongCat const & WrongCat)
{
    this->type = WrongCat.type;
    return (*this);
}

