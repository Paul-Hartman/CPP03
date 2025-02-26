/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:45:04 by phartman          #+#    #+#             */
/*   Updated: 2025/02/26 17:14:10 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default"){
	std::cout << YELLOW << "FragTrap default constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << YELLOW << "FragTrap name constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other){
	std::cout << YELLOW << "FragTrap copy constructor called" << RESET << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other){
	std::cout << YELLOW << "FragTrap assignation operator called" << RESET << std::endl;
	if (this != &other){
		ClapTrap::operator=(other);
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << YELLOW << "FragTrap destructor called" << RESET << std::endl;
}

void FragTrap::attack(const std::string& target){

	if (this->_energyPoints == 0){
		std::cout << YELLOW << "FragTrap" << this->_name << " is out of energy!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout <<YELLOW <<  "FragTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage!" << std::endl;

}

void FragTrap::highFivesGuys(){
	std::cout << YELLOW << "Fragtrap " << this->_name << " is requesting a high five." << RESET << std::endl;
}

int FragTrap::getEnergyPoints(){
	return this->_energyPoints;
}

