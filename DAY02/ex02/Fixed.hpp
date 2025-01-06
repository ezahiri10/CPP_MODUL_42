/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:59:15 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/06 15:44:02 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
class Fixed
{
    private :
        int fixedPointValue;
        static const int fractionalBits = 8;
    public :
        Fixed ();
        Fixed (const int val);
        Fixed (const float val);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed (const Fixed &F);
        Fixed &operator=(const Fixed &F);
        ~Fixed ();
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        bool operator<(const Fixed &F) const;
        bool operator>(const Fixed &F) const;
        bool operator>=(const Fixed &F) const;
        bool operator<=(const Fixed &F) const;
        bool operator==(const Fixed &F) const;
        bool operator!=(const Fixed &F) const;
        Fixed operator+(const Fixed &F);
        Fixed operator-(const Fixed &F);
        Fixed operator/(const Fixed &F);
        Fixed operator*(const Fixed &F);
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static const Fixed &max(Fixed &F1, Fixed &F2);
        static const Fixed &min(Fixed &F1, Fixed &F2);
        static const Fixed &max(const Fixed &F1,const Fixed &F2);
        static const Fixed &min(const Fixed &F1,const Fixed &F2);
};

std::ostream &operator<< (std::ostream &os, const Fixed &F);