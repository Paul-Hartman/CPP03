/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:35 by phartman          #+#    #+#             */
/*   Updated: 2025/02/26 16:21:46 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	ScavTrap john("John");
	ScavTrap jane("Jane");

	john.attack("Jane");
	jane.takeDamage(5);
	jane.beRepaired(3);
	jane.attack("John");
	john.takeDamage(99);
	john.takeDamage(1);
	john.takeDamage(1);
	for(int i = 0; i < 50; i++)
		john.beRepaired(1);
	john.guardGate();
	return 0;
}
