/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:54:37 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/11 16:20:16 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{};

AMateria::AMateria (const AMateria &other) : type (other.type)
{}

AMateria::AMateria(std::string const &type) : type(type)
{}

AMateria& AMateria::operator=(const AMateria &other)
{
    this->type = other.type;
    return (*this);
}

AMateria::~AMateria (){}

std::string const &AMateria::getType () const
{
    return (type);
}

void  AMateria::use(ICharacter& target)
{}