/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:35 by phartman          #+#    #+#             */
/*   Updated: 2025/02/26 14:48:16 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	ClapTrap john("John");
	ClapTrap jane("Jane");

	john.attack("Jane");
	jane.takeDamage(5);
	jane.beRepaired(3);
	jane.attack("John");
	john.takeDamage(5);
	john.takeDamage(10);
	john.takeDamage(10);
	for(int i = 0; i < 10; i++)
		john.beRepaired(10);
	return 0;
}
