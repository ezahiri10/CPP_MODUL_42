/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:43:48 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/06 15:42:06 by ezahiri          ###   ########.fr       */
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
};

std::ostream &operator<< (std::ostream &os, const Fixed &F);