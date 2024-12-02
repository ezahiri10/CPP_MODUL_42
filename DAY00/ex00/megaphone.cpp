/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:41:02 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/02 20:59:49 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_upper (char *s)
{
	for (int i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			std::cout << (char)(s[i] - 32);
		else
			std::cout << s[i];
	}
}

int main (int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		print_upper(av[i]);
		i++;
	}
}

/*
 ** CPP_MODUL 42 **
 Descriptor:
	
*/