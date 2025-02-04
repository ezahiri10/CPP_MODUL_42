/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:53:03 by ezahiri           #+#    #+#             */
/*   Updated: 2025/02/04 17:13:11 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main ()
{
    int data[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(data, data + 5);
    easyfind(vec, 5); 
    easyfind(vec, 6);
}