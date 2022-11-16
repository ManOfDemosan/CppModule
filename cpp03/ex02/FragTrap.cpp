#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name){
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name <<" constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) {
    this->_name = obj._name;
    this->_hitPoint = obj._hitPoint;
    this->_energyPoint = obj._energyPoint;
    this->_attackDamage = obj._attackDamage;
    std::cout << "FragTrap " << this->_name <<" constructor is called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " destructor is called" << std:: endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    this->_name = rhs._name;
    this->_attackDamage = rhs._attackDamage;
    this->_energyPoint = rhs._energyPoint;
    this->_hitPoint = rhs._hitPoint;
    std::cout << "FragTrap " << this->_name << "'s = operator is called" << std:: endl;
    return(*this);
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap" << this->_name << " gave me a five!" << std::endl;
}