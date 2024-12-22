/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:03:36 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/22 13:18:55 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point 
{
    private :
        Fixed const x;    
        Fixed const y;
    public :
        Point ();    
        Point (const Fixed &a, const Fixed &b);
        Point (const Point &P);
        Point &operator= (const Point &P);
        Fixed get_x(void) const;
        Fixed get_y(void) const;
};

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);