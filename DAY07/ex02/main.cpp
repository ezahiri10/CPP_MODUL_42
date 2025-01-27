/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:56:45 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/27 08:59:14 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
    try
    {
        Array<int> A(10);

        for (int i = 0; i < 10; i++)
            std::cout << "A[" << i << "] = " << A[i] << " ,";
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error : "<< e.what () << std::endl ;
    }
    return (0);
}