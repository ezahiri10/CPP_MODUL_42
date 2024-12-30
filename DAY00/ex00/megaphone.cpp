/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:41:02 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/30 20:00:02 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_upper (std::string s)
{
	for (int i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			std::cout << (char)std::toupper(s[i]);
		else
			std::cout << s[i];
	}
}

int main (int ac, char **av)
{
	for (int i = 1; i < ac; i++)
		print_upper(av[i]);
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
