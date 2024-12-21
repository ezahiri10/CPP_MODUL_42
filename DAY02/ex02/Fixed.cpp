/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:37:59 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/21 11:40:16 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : fixedPointValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
    // std::cout << "Int constructor called" << std::endl;
    fixedPointValue = val << fractionalBits;
}

Fixed::Fixed (const float val)
{
    // std::cout << "Float constructor called" << std::endl;
    fixedPointValue = roundf(val * (1 << fractionalBits));
}

Fixed::Fixed (const Fixed &F)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = F; 
}

Fixed &Fixed::operator=(const Fixed &F)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    fixedPointValue = F.getRawBits();
    return (*this);
}

Fixed::~Fixed ()
{
    // std::cout << "Destructor called" << std::endl;
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

bool Fixed::operator!= (const Fixed &F)
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

bool Fixed::operator>= (const Fixed &F)
{
    return (this->toFloat() >= F.toFloat ());
}

bool Fixed::operator<= (const Fixed &F)
{
    return (this->toFloat() <= F.toFloat ());
}

bool Fixed::operator== (const Fixed &F)
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

Fixed Fixed::max(Fixed &F1, Fixed &F2)
{
    if (F1 > F2)
        return (F1);
    else
        return (F2);
}


Fixed Fixed::min(const Fixed &F1,const Fixed &F2)
{
    if (F1 > F2)
        return (F2);
    else
        return (F1);
}

Fixed Fixed::min(Fixed &F1 , Fixed &F2)
{
    if (F1 > F2)
        return (F2);
    else
        return (F1);
}

Fixed Fixed::max(const Fixed &F1,const Fixed &F2)
{
    if (F1 > F2)
        return (F1);
    else
        return (F2);
}