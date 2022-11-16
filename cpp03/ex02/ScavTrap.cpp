#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name <<" constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) {
    this->_name = obj._name;
    this->_hitPoint = obj._hitPoint;
    this->_energyPoint = obj._energyPoint;
    this->_attackDamage = obj._attackDamage;
    std::cout << "ScavTrap " << this->_name <<" constructor is called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " destructor is called" << std:: endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    this->_name = rhs._name;
    this->_attackDamage = rhs._attackDamage;
    this->_energyPoint = rhs._energyPoint;
    this->_hitPoint = rhs._hitPoint;
    std::cout << "ScavTrap " << this->_name << "'s = operator is called" << std:: endl;
    return(*this);
}

void ScavTrap::attack(const std::string& target){
    if(!this->_hitPoint || !this->_energyPoint){
        std::cout << "ScavTrap " << this->_name << " is obsolete" << std::endl;
    }
    else{
        std::cout << "ScavTrap "<< this->_name << " attacks " <<  target <<", causing " 
        <<  this->_attackDamage << " points of damage!" << std::endl;
        --this->_energyPoint;
    }
}

void ScavTrap::guardGate(){
	if (!this->_hitPoint || !this->_energyPoint)
	{
	    std::cout << "ScavTrap " << this->_name << " can't be gate guard" << std::endl;
	}
    else
    std::cout << "ScavTrap " << this->_name << " is gate guard mode now" << std::endl;
    --this->_energyPoint;
}
