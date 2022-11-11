#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointNum = 0;
}

Fixed::Fixed(const Fixed &ref){
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}


Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNum = i << this->_numOfFractionalBit ;
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNum = static_cast<int>(roundf(f * (1 * 256)));
}

Fixed&	Fixed::operator=(const Fixed &ref){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNum = ref._fixedPointNum;
	return(*this);
}


Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt() const{
	return(this->_fixedPointNum >> this->_numOfFractionalBit);
}

float	Fixed::toFloat() const{
	float f = static_cast<float>(_fixedPointNum) / (1 << this->_numOfFractionalBit);
	return(f);
}


std::ostream& operator<<(std::ostream& os, const Fixed &ref){
	os << ref.toFloat();
	return (os);
}
