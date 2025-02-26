/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:35 by phartman          #+#    #+#             */
/*   Updated: 2025/02/26 16:55:33 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	FragTrap john("John");
	FragTrap jane("Jane");
	FragTrap jenny(jane);
	ScavTrap jessy("Jessy");
	ScavTrap jessica("Jessica");
	ScavTrap jess(jessica);
	ScavTrap jessica2(jess);
	jess = jessica2;
	john = jane;
	john.attack("Jane");
	jess.attack("Jessica");
	jane.takeDamage(5);
	jane.beRepaired(3);
	john.highFivesGuys();
	return 0;
}
