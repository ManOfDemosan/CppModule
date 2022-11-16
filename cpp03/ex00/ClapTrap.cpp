#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->_name = "default";
    this->_attackDamage = 0;
    this->_energyPoint = 10;
    this->_hitPoint = 10;
    std::cout << "ClapTrap " << this->_name << " is assembled" << std:: endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_attackDamage = 0;
    this->_energyPoint = 10;
    this->_hitPoint = 10;
    std::cout << "ClapTrap " << this->_name << " is assembled" << std:: endl;
}
ClapTrap::ClapTrap(const ClapTrap& obj) {
    this->_name = obj._name;
    this->_attackDamage = obj._attackDamage;
    this->_energyPoint = obj._energyPoint;
    this->_hitPoint = obj._hitPoint;
    std::cout << "ClapTrap " << this->_name << " is assembled" << std:: endl;
}


ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " destructor is called" << std:: endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    this->_name = rhs._name;
    this->_attackDamage = rhs._attackDamage;
    this->_energyPoint = rhs._energyPoint;
    this->_hitPoint = rhs._hitPoint;
    std::cout << "ClapTrap " << this->_name << "'s = operator is called" << std:: endl;
    return(*this);
}

void    ClapTrap::attack(const std::string& target){
    if(!this->_hitPoint || !this->_energyPoint){
        std::cout << "ClapTrap " << this->_name << " is obsolete" << std::endl;
    }
    else{
        std::cout << "ClapTrap "<< this->_name << " attacks" <<  target <<", causing " 
        <<  this->_attackDamage << " points of damage!" << std::endl;
        --this->_energyPoint;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    if(this->_hitPoint < amount){
        this->_hitPoint = 0;
    }
    else
        this->_hitPoint -= amount;
    if(this->_hitPoint <= 0){
        std::cout << this->_name << " is dead.." << std::endl;
    }
    else
        std::cout << this->_name << " has taked " << amount << " damage" 
        << " only "<< this->_hitPoint << " is remained" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if(this->_hitPoint == 0){
        std::cout << this->_name << " is already dead..!" << std::endl;
        return ;
    }
    this->_hitPoint += amount;
    if(this->_hitPoint >= 10){
        std::cout << this->_name << " is fully recoverd!" << std::endl;
    }
    else
        std::cout << this->_name << " has recoverd " << amount << "HP! " 
        << this->_hitPoint << " is remained" << std::endl;
}