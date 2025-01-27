/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:38 by phartman          #+#    #+#             */
/*   Updated: 2025/01/27 17:46:55 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << BLUE << "ClapTrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << BLUE <<"ClapTrap name constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << BLUE <<"ClapTrap copy constructor called" << RESET << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	std::cout << BLUE << "ClapTrap assignation operator called" << RESET << std::endl;
	if (this != &other){
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << BLUE <<"ClapTrap destructor called" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->_energyPoints == 0){
		std::cout << "ClapTrap" << this->_name << " is out of energy!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << BLUE << "ClapTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints == 0){
		std::cout << BLUE << "ClapTrap " << this->_name << " is already dead!" << RESET << std::endl;
		return;
	}
	this->_hitPoints -= amount;
	std::cout << BLUE <<  "ClapTrap " << this->_name << " takes " << amount <<
	" points of damage! Their Current HP is " << this->_hitPoints << "." << RESET <<  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoints == 0)
	{
		std::cout << BLUE << "ClapTrap " << this->_name << " is out of energy!" << RESET <<  std::endl;
		return;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << BLUE << "ClapTrap " << this->_name << " is repaired for " << amount <<
	 " points! Their Current HP is " << this->_hitPoints << "." << RESET << std::endl;
	
}

