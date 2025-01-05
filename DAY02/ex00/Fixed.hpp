/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:54:01 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/05 16:52:38 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private :
        int fixedPointValue;;
        static const int fractionalBits = 8;
    public :
        Fixed ();
        Fixed (Fixed &F);
        Fixed & operator=(Fixed &F);
        ~Fixed ();
        int getRawBits( void ) const;
        void setRawBits( int const fixedPointValue);         
};