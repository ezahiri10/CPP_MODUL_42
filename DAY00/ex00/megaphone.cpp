/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:41:02 by ezahiri           #+#    #+#             */
/*   Updated: 2025/01/02 14:33:45 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_upper (std::string s)
{
	for (size_t i = 0; i != s.size(); i++)
	{
			std::cout << (char)std::toupper(s.at(i));
	}
}

int main (int ac, char **av)
{
	for (int i = 1; i < ac; i++)
		print_upper(av[i]);
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
