/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:10:34 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/22 13:54:13 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Point.hpp"



Point::Point () : x(0), y(0){}

Point::Point (const Fixed &a, const Fixed &b) : x(a), y(b) {
}


Fixed Point::get_x (void) const
{
    return (x);
}

Fixed Point::get_y (void) const
{
    return (y);
}

Point &Point::operator=(const Point &P) 
{
    new (this) Point(P);
    return (*this);
}

Point::Point (const Point &P) // : x(P.x), y(P.y) // why  this attributes is pravite 
{
    *this = P;
}


