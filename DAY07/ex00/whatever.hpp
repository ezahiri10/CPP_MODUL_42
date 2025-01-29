/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:15:25 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/27 22:22:15 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap (T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T> T min (T a, T b)
{
    return (b <= a) ? b : a;
}

template <typename T> T max (T a, T b)
{
    return (b >= a) ? b : a;
}

#endif