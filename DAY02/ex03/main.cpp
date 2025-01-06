/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:59:07 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/06 15:45:48 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main ()
{
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(0), Fixed(4));
    Point c(Fixed(5), Fixed(0));
    Point point(Fixed(0.001f), Fixed(0.001f));

    if (bsp(a, b, c, point))
        std::cout << "The point is inside the triangle" << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl;
    return (0);
}