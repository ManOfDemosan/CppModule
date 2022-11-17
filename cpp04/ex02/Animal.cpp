#include "Animal.hpp"

Animal::Animal() {
    this->_type = "Animal";
    std::cout << this->_type << " is called" << std::endl;
}

Animal::Animal(const Animal& obj) {
    this->_type = obj._type;
    std::cout << this->_type << " is called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal ["<< this->_type << "] is vanish" << std::endl;

}

Animal& Animal::operator=(const Animal& obj) {
    this->_type = obj._type;
    return(*this);
}

// void Animal::makeSound() const{
//     std::cout << this->_type << " make sound" << " NOTHING" << std::endl;
// }

std::string Animal::getType() const {
	return _type;
}