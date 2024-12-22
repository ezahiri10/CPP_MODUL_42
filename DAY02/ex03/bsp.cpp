/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:03:20 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/21 23:04:23 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream &operator<< (std::ostream &os, const Fixed &F)
{
    os << F.toFloat ();
	return (os);
}


Fixed Area (Point const &P1, Point const &P2, Point const &P3)
{
    Fixed res = ((P2.get_x () - P1.get_x ()) * (P3.get_y () - P1.get_y ()) 
        - (P3.get_x () - P1.get_x ()) * (P2.get_y () - P1.get_y()));
    return (Fixed(0.5f * abs(res.toFloat())));
}

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
    Fixed totalArea = Area(a, b, c);
    Fixed area1 = Area(a, b, point);
    Fixed area2 = Area(a, point, c);
    Fixed area3 = Area(point, b, c);

    std::cout << "Total Area: " << totalArea << std::endl;
    std::cout << "Area1: " << area1 << std::endl;
    std::cout << "Area2: " << area2 << std::endl;
    std::cout << "Area3: " << area3 << std::endl;
    if (totalArea == Fixed(0) || area1 == Fixed(0) || area2 == Fixed(0) || area3 == Fixed(0))
        return (false);
    if (totalArea == (area1 + area2 + area3))
        return (true);
    return (false);
}

int main ()
{
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(0), Fixed(4));
    Point c(Fixed(5), Fixed(0));
    Point point(Fixed(0.5f), Fixed(0.3f));

    if (bsp(a, b, c, point))
        std::cout << "The point is inside the triangle" << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl;
    return (0);

}