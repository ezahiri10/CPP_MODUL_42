/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:33:19 by ezahiri           #+#    #+#             */
/*   Updated: 2024/12/29 12:39:40 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap	ST_1( "Serena, my love!" );

	ST_1.attack( "Zombie" );
	ST_1.takeDamage( 2 );
	ST_1.beRepaired( 12 );
	ST_1.guardGate();

	return 0;
}
