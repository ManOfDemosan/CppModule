#include "Cat.hpp"

Cat::Cat() {
    this->_type = "CAT";
    this->_brain = new Brain();
    std::cout << this->_type << " is called" << std::endl;
}

Cat::Cat(const Cat& obj) {
    this->_type = obj._type;
    this->_brain = obj._brain;
    std::cout << this->_type << " is called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
    this->_type = obj._type;
    this->_brain = obj._brain;
    return(*this);
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << this->_type << " is vanish" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << this->_type << " make sound" << " 야옹 "<< std::endl;
}