/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:13:51 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/06 15:41:59 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    fixedPointValue = val << fractionalBits;
}

Fixed::Fixed (const float val)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPointValue = roundf(val * (1 << fractionalBits));
}

Fixed::Fixed (const Fixed &F)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = F; 
}

Fixed &Fixed::operator=(const Fixed &F)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixedPointValue = F.getRawBits();
    return (*this);
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits (int const fixedPointValue)
{
    this->fixedPointValue = fixedPointValue;
}

int Fixed::getRawBits ( void ) const
{
    return (fixedPointValue);
}


float Fixed::toFloat (void) const
{
    return ((float)(fixedPointValue)  / (1 << fractionalBits));
}

int Fixed::toInt (void) const
{
    return (fixedPointValue >> fractionalBits);
}

std::ostream &operator<< (std::ostream &os, const Fixed &F)
{
    os << F.toFloat ();
	return (os);
}
