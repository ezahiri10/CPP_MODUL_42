/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:06:01 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/27 22:20:26 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printChar(const char& c) {
    std::cout << c << " ";
}

void printInt(int& i) {
    std::cout << i << " ";
}

void toUpperCase(char& c) {
    c = std::toupper(c);
}

void doubleValue(int& i) {
    i *= 2;
}

int main() 
{
    char str[] = "Hello, World!";
    int arr[] = {1, 2, 3, 4, 5};

    std::cout << "Original string: " << str << std::endl;
    iter(str, strlen(str), printChar);
    std::cout << std::endl;
    iter(str, strlen(str), toUpperCase);
    std::cout << "String after toUpperCase: " << str << std::endl;
    iter(str, strlen(str), printChar);
    std::cout << std::endl;

    std::cout << "Original array: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    iter(arr, 5, doubleValue);
    std::cout << "Array after doubleValue: ";
    iter(arr, 5, printInt);
    std::cout << std::endl;

    return 0;
}