#include "Zombie.hpp"

void	Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	this->_name = name;
}

Zombie::Zombie() : _name("1. Zom Bee"){
	std::cout << this->_name << " is made" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name){
	std::cout << this->_name << " is made" << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->_name << " is vanish" << std::endl;
}

