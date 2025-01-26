/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:15:25 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/26 13:28:48 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void swap (T &a, T &b)
{
    T c;

    c = b;
    b = a; 
    a = c;
}

template <typename T> T min (T a, T b)
{
    return (b <= a) ? b : a;
}

template <typename T> T max (T a, T b)
{
    return (b >= a) ? b : a;
}


