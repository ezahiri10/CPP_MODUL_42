/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:03:20 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/22 13:54:38 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point Vecetor (Point const &P1, Point const &P2)
{
    return (Point(P2.get_x() - P1.get_x(), P2.get_y() - P1.get_y()));
}

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
    Point ab = Vecetor(a, b);
    Point bc = Vecetor(b, c);
    Point ca = Vecetor(c, a);
    Point ap = Vecetor(a, point);
    Point bp = Vecetor(b, point);
    Point cp = Vecetor(c, point);

    Fixed cross1 = (ab.get_x() * ap.get_y() - ab.get_y() * ap.get_x());
    Fixed cross2 = (bc.get_x() * bp.get_y() - bc.get_y() * bp.get_x());
    Fixed cross3 = (ca.get_x() * cp.get_y() - ca.get_y() * cp.get_x());

    if ((cross1 > Fixed(0) && cross2 > Fixed(0) && cross3 > Fixed(0)) || 
        (cross1 < Fixed(0) && cross2 < Fixed(0) && cross3 < Fixed(0)))
        return (true);
    return (false); 
    
}

