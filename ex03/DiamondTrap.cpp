/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:27:18 by phartman          #+#    #+#             */
/*   Updated: 2025/02/04 12:41:35 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(){
	std::cout << RED << "DiamondTrap default constructor called" << RESET << std::endl;
	this->_name = "default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	std::cout <<RED << "DiamondTrap name constructor called" << RESET << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap damage = " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ScavTrap(other), FragTrap(other){
	std::cout << RED <<"DiamondTrap copy constructor called" << RESET << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other){
	std::cout << RED << "DiamondTrap assignation operator called" << RESET << std::endl;
	if (this != &other){
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << RED <<"DiamondTrap destructor called" << RESET <<  std::endl;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << RED << "My name is " << this->_name << std::endl;
	std::cout << RED << "My claptrap name is " << this->ClapTrap::_name << RESET << std::endl;
}

void DiamondTrap::printEnergyPoints(){
	std::cout << RED << "Energy points: " << this->_energyPoints << RESET << std::endl;
}

void DiamondTrap::printHitPoints(){
	std::cout << RED << "Hit points: " << this->_hitPoints << RESET << std::endl;
}

void DiamondTrap::printAttackDamage(){
	std::cout << RED << "Attack damage: " << this->_attackDamage << RESET << std::endl;
}
	