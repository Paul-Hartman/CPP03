/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:45:04 by phartman          #+#    #+#             */
/*   Updated: 2025/02/04 12:47:58 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default"){
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other){
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &other){
		ClapTrap::operator=(other);
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target){

	if (this->_energyPoints == 0){
		std::cout << "FragTrap" << this->_name << " is out of energy!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage!" << std::endl;

}

void FragTrap::highFivesGuys(){
	std::cout << "Fragtrap " << this->_name << " is requesting a high five." << std::endl;
}
