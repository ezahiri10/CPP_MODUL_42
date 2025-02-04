/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:44:01 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/04 17:16:06 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T> void easyfind (T &arr, int to_find)
{
    typename T::iterator it = std::find(arr.begin(), arr.end(), to_find);

    if (it != arr.end())
        std::cout << "is found " << std::endl;
    else
        std::cout << "is not found" << std::endl;
}

#endif