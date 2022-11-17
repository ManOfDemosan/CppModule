#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->_type = "WrongCat";
    std::cout << this->_type << " is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) {
    this->_type = obj._type;
    std::cout << this->_type << " is called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
    this->_type = obj._type;
    return(*this);
}

WrongCat::~WrongCat() {
    std::cout << this->_type << " is vanish" << std::endl;
}

void    WrongCat::makeSound() const{
    std::cout << this->_type << " make sound" << " 옹야~ 옹야~ "<< std::endl;
}