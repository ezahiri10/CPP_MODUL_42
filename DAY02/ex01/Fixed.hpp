/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:43:48 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/19 18:41:02 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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