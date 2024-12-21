/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:03:20 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/21 22:21:49 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream &operator<< (std::ostream &os, const Fixed &F)
{
    os << F.toFloat ();
	return (os);
}


const Fixed Area (Point const &P1, Point const &P2, Point const &P3)
{
    Fixed res = ((P2.get_x () - P1.get_x ()) * (P3.get_y () - P1.get_y ()) 
        - (P3.get_x () - P1.get_x ()) * (P2.get_y () - P1.get_y()));
    return (Fixed(0.5f) * res);
}

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
    Fixed abc = Area (a, b, c);
    Fixed abp = Area (a, b, point);
    Fixed acp = Area (a, c, point);
    Fixed bcp = Area (b, c, point);
    // std::cout << "abc: " << abc << std::endl;
    // std::cout << "abp: " << abp << std::endl;
    // std::cout << "acp: " << acp << std::endl;
    // std::cout << "bcp: " << bcp << std::endl;
    return (abc == abp + acp + bcp);
}

int main ()
{
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(0), Fixed(4));
    Point c(Fixed(4), Fixed(0));
    Point point(3, 1);

    if (bsp(a, b, c, point))
        std::cout << "The point is inside the triangle" << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl;
    return (0);

}