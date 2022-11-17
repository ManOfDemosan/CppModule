#include "Cat.hpp"

Cat::Cat() {
    this->_type = "CAT";
    std::cout << this->_type << " is called" << std::endl;
}

Cat::Cat(const Cat& obj) {
    this->_type = obj._type;
    std::cout << this->_type << " is called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
    this->_type = obj._type;
    return(*this);
}

Cat::~Cat() {
    std::cout << this->_type << " is vanish" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << this->_type << " make sound" << " 야옹 "<< std::endl;
}