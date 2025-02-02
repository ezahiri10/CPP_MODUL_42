/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:44:01 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/02 20:01:50 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T> void easyfind (T &arr, int to_find)
{
    typename T::iterator it = arr.begin();

    while (arr.end() != it)
    {
        if (*it == to_find)
        {
            std::cout << "is find " << std::endl;
            return ;
        }
        it++;
    }
    std::cout << "is not found" << std::endl;
}