#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->_type = "WrongAnimal";
    std::cout << this->_type << " is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
    this->_type = obj._type;
    std::cout << this->_type << " is called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal ["<< this->_type << "] is vanish" << std::endl;

}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
    this->_type = obj._type;
    return(*this);
}

void WrongAnimal::makeSound() const{
    std::cout << this->_type << " make sound" << " NOTHING WRONG? HAHA!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return _type;
}