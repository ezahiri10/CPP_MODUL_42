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
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";    
}

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat type constructor called" << std::endl;
    this->type = type;
}

WrongCat::~WrongCat ()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound ( void ) const
{
    std::cout << " sound of WrongCats " << std::endl;
}

std::string WrongCat::getType ( void ) const
{
    return (this->type);
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.getType();
    return (*this);
}