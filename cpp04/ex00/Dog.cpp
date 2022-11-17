#include "Dog.hpp"

Dog::Dog() {
    this->_type = "Dog";
    std::cout << this->_type << " is called" << std::endl;
}

Dog::Dog(const Dog& obj) {
    this->_type = obj._type;
    std::cout << this->_type << " is called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
    this->_type = obj.getType();
    return(*this);
}

Dog::~Dog() {
    std::cout << this->_type << " is vanish" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << this->_type << " make sound" << " 왈왈! "<< std::endl;
}