#include "Dog.hpp"

Dog::Dog() {
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << this->_type << " is called" << std::endl;
}

Dog::Dog(const Dog& obj) {
    this->_type = obj._type;
    this->_brain = obj._brain;
    std::cout << this->_type << " is called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
    this->_type = obj._type;
    this->_brain = obj._brain;
    return(*this);
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << this->_type << " is vanish" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << this->_type << " make sound" << " 왈왈! "<< std::endl;
}