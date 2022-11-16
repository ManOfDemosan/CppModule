#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

}

ClapTrap::ClapTrap(std::string name) {

}

ClapTrap::~ClapTrap() {

}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {

}

void    ClapTrap::attack(const std::string& target){
    if(!this->_hitPoint || !this->_energyPoint){
        std::cout << "ClapTrap" << this->_name << "is obsolete" << std::endl;
    }
    else{
        std::cout << "ClapTrap"<< this->_name << "attacks" <<  target <<", causing " <<  this->_attackDamage << "points of damage!" << std::endl;
        --this->_energyPoint;
    }
}