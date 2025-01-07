/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:37:59 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/06 15:43:48 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : fixedPointValue(0) {}

Fixed::Fixed(const int val)
{
    fixedPointValue = val << fractionalBits;
}

Fixed::Fixed (const float val)
{
    fixedPointValue = roundf(val * (1 << fractionalBits));
}

Fixed::Fixed (const Fixed &F)
{
    *this = F; 
}

Fixed &Fixed::operator=(const Fixed &F)
{
    fixedPointValue = F.getRawBits();
    return (*this);
}

Fixed::~Fixed ()
{
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

bool Fixed::operator!= (const Fixed &F) const
{
    return (F.toFloat() != this->toFloat());
}

bool Fixed::operator<(const Fixed &F) const
{
    return (this->toFloat() < F.toFloat ());
}

bool Fixed::operator>(const Fixed &F) const
{
    return (this->toFloat() > F.toFloat ());
}

bool Fixed::operator>= (const Fixed &F) const
{
    return (this->toFloat() >= F.toFloat ());
}

bool Fixed::operator<= (const Fixed &F) const
{
    return (this->toFloat() <= F.toFloat ());
}

bool Fixed::operator== (const Fixed &F) const
{
    return (F.toFloat() == this->toFloat());
}

Fixed Fixed::operator+ (const Fixed &F)
{
    
    return (Fixed(toFloat() + F.toFloat()));
}

Fixed Fixed::operator- (const Fixed &F)
{
    return (Fixed(toFloat() - F.toFloat()));
}

Fixed Fixed::operator/ (const Fixed &F)
{
   return (Fixed(toFloat() / F.toFloat()));
}

Fixed Fixed::operator* (const Fixed &F)
{
    return (Fixed(toFloat() * F.toFloat()));
}

Fixed Fixed::operator++ ()
{
    this->fixedPointValue++;
    return (*this) ;
}

Fixed Fixed::operator--()
{
    this->fixedPointValue++;
    return (*this) ;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this; 
    this->fixedPointValue++;
    return (tmp) ;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this; 
    this->fixedPointValue--;
    return (tmp) ;
}

const Fixed &Fixed::max(Fixed &F1, Fixed &F2)
{
   return (F1 > F2 ? F1 : F2);
}


const Fixed &Fixed::min(const Fixed &F1,const Fixed &F2)
{
    return (F1 < F2 ? F1 : F2);
}

const Fixed &Fixed::min(Fixed &F1 , Fixed &F2)
{
    return (F1 < F2 ? F1 : F2);
}

const Fixed &Fixed::max(const Fixed &F1,const Fixed &F2)
{
    return (F1 > F2 ? F1 : F2);
}

std::ostream &operator<< (std::ostream &os, const Fixed &F)
{
    os << F.toFloat ();
	return (os);
}
