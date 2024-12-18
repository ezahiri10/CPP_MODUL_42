/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:11:28 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/18 20:55:09 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static const int a = 8;

Fixed::Fixed () : raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed &F)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = F; 
}

Fixed &Fixed::operator=(Fixed &F)
{
    std::cout << "Copy assignment operator called" << std::endl;
    raw = F.getRawBits();
    return (*this);
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits (int const raw)
{
    this->raw = raw;
}

int Fixed::getRawBits ( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (raw);
}
