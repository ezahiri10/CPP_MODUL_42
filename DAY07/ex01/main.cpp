/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:06:01 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/26 17:09:20 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printElement(char& c) {
    std::cout << c << " ";
}

void toUpperCase(char& c) {
    c = std::toupper(c);
}

void doubleValue(int& i) {
    i *= 2;
}

int main() {
    char str[] = "hello";
    size_t length = sizeof(str) - 1;

    std::cout << "Original string: ";
    iter(str, length, printElement);
    std::cout << "\n";

    std::cout << "Uppercased string: ";
    iter(str, length, toUpperCase);
    iter(str, length, printElement);
    std::cout << "\n";

    // int numbers[] = {1, 2, 3, 4, 5};
    // size_t numLength = sizeof(numbers) / sizeof(numbers[0]);

    // std::cout << "Original integers:

    return 0;
}
