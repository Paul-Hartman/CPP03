/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:45:04 by phartman          #+#    #+#             */
/*   Updated: 2025/01/27 17:51:34 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default"){
	std::cout << YELLOW << "FragTrap default constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << YELLOW << "FragTrap name constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other){
	std::cout << YELLOW << "FragTrap copy constructor called" << RESET << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other){
	std::cout << YELLOW << "FragTrap assignation operator called" << RESET << std::endl;
	if (this != &other){
		ClapTrap::operator=(other);
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << YELLOW << "FragTrap destructor called" << RESET << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << YELLOW << "Fragtrap " << this->_name << " is requesting a high five." << RESET << std::endl;
}
