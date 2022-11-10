#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointNum = 0;
}

Fixed::Fixed(const Fixed &ref){
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed&	Fixed::operator=(const Fixed &ref){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNum = ref._fixedPointNum;
	return(*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int 	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedPointNum);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "set raw member function called" << std::endl;
	this->_fixedPointNum = raw;
}

