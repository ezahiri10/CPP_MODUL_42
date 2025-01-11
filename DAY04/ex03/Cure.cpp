/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:08:51 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 18:34:35 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure"; // ?!!
}

Cure::Cure (const Cure &other) : AMateria(other)
{
    this->type = other.type;
}

Cure &Cure::operator= (const Cure &other)
{
    this->type = other.type;
    return (*this);
}

Cure::~Cure()
{}

AMateria *Cure::clone() const
{
    return (new Cure ());
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* shoots an cure bolt at ";
    std::cout << target.getName () << " *" << std::endl;
}