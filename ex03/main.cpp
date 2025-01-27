/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:35 by phartman          #+#    #+#             */
/*   Updated: 2025/01/27 17:28:27 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
 // Test default constructor
    DiamondTrap dt1;
    dt1.whoAmI();
    dt1.attack("target1");

	std::cout << std::endl;

    // Test parameterized constructor
    DiamondTrap dt2("Diamond");
    dt2.whoAmI();
    dt2.attack("target2");

	std::cout << std::endl;

    // Test copy constructor
    DiamondTrap dt3(dt2);
    dt3.whoAmI();
    dt3.attack("target3");

	std::cout << std::endl;

    // Test assignment operator
    DiamondTrap dt4;
    dt4 = dt2;
    dt4.whoAmI();
    dt4.attack("target4");

	std::cout << std::endl;

    

    return 0;
}
