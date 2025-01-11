/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 11:44:30 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 16:17:12 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

Ice::Ice()
{
    this->type = "ice"; // ?!!
}

Ice::Ice (const Ice &other) : AMateria(other)
{
    this->type = other.type;
}

Ice &Ice::operator= (const Ice &other)
{
    this->type = other.type;
    return(*this);
}

Ice::~Ice()
{}

AMateria *Ice::clone() const
{
    return (new Ice ());
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at ";
    std::cout << target.getName () << " *" << std::endl;
}