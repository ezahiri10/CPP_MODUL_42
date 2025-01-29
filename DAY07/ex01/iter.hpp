/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:18:59 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/27 22:17:41 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstring>
#include <iostream>

template <typename T> void iter (T *array, size_t lenth, void (*func)(T &))
{
    for (size_t i = 0; i < lenth ; i++)
    {
        func(array[i]);
    }
}

template <typename T> void iter (T *array, size_t lenth, void (*func)(const T &))
{
    for (size_t i = 0; i < lenth ; i++)
    {
        func(array[i]);
    }
}

#endif