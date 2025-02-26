#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default"){
	std::cout <<GREEN << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout <<GREEN << "ScavTrap name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other){
	std::cout << GREEN <<"ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
	std::cout <<GREEN << "ScavTrap assignation operator called" << std::endl;
	if (this != &other){
		ClapTrap::operator=(other);
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << GREEN <<"ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){

	if (this->_energyPoints == 0){
		std::cout << GREEN <<"ScavTrap" << this->_name << " is out of energy!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << GREEN <<"ScavTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage!" << std::endl;

}

void ScavTrap::guardGate(){
	std::cout <<GREEN << "ScavTrap " << this->_name << " has entered in Gate keeper mode." << std::endl;
}
