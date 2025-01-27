/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:35 by phartman          #+#    #+#             */
/*   Updated: 2025/01/27 14:55:31 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	FragTrap john("John");
	ScavTrap jane("Jane");

	john.attack("Jane");
	jane.takeDamage(5);
	jane.beRepaired(3);
	jane.attack("John");
	john.takeDamage(5);
	john.beRepaired(3);
	john.beRepaired(3);
	john.beRepaired(3);
	john.beRepaired(3);
	john.beRepaired(3);
	john.beRepaired(3);
	john.beRepaired(3);
	john.beRepaired(3);
	john.beRepaired(3);
	john.beRepaired(3);
	return 0;
}
