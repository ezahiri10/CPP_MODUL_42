/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:54:01 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/18 20:53:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private :
        int raw;
        static const int a;
    public :
        Fixed ();
        Fixed (Fixed &F);
        Fixed & operator=(Fixed &F);
        ~Fixed ();
        int getRawBits( void ) const;
        void setRawBits( int const raw);         
};