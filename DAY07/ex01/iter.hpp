/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:18:59 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/26 17:08:03 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void iter (T *array, size_t lenth, void (*func)(T &))
{
    for (size_t i = 0; i < lenth ; i++)
    {
        func(array[i]);
    }
}