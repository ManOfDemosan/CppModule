#include "Fixed.hpp"

#include "Fixed.hpp"

Fixed::Fixed(){
	this->_fixedPointNum = 0;
}

Fixed::Fixed(const Fixed &ref){
	*this = ref;
}


Fixed::Fixed(const int i){
	this->_fixedPointNum = i << this->_numOfFractionalBit ;
}

Fixed::Fixed(const float f){
	this->_fixedPointNum = static_cast<int>(roundf(f * (1 * 256)));
}

Fixed&	Fixed::operator=(const Fixed &ref){
	this->_fixedPointNum = ref._fixedPointNum;
	return(*this);
}


Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat() const{
	float f = static_cast<float>(_fixedPointNum) / (1 << this->_numOfFractionalBit);
	return(f);
}


std::ostream& operator<<(std::ostream& os, const Fixed &ref){
	os << ref.toFloat();
	return (os);
}

int	Fixed::getBit() const{
	return (this->_fixedPointNum);
}

void	Fixed::setBit(int set){
	this->_fixedPointNum = set;
}

bool	Fixed::operator>(const Fixed& f){
	return (this->_fixedPointNum > f.getBit());
}

bool	Fixed::operator<(const Fixed& f){
	return (this->_fixedPointNum < f.getBit());
}

bool	Fixed::operator>=(const Fixed& f){
	return (this->_fixedPointNum >= f.getBit());
}

bool	Fixed::operator<=(const Fixed& f){
	return (this->_fixedPointNum <= f.getBit());
}

bool	Fixed::operator==(const Fixed& f){
	return (this->_fixedPointNum == f.getBit());
}

bool	Fixed::operator!=(const Fixed& f){
	return (this->_fixedPointNum != f.getBit());
}

Fixed	Fixed::operator+(const Fixed& f){
	Fixed result(this->toFloat() + f.toFloat());
	return result;
}

Fixed	Fixed::operator-(const Fixed& f){
	Fixed result(this->toFloat() - f.toFloat());
	return result;
}

Fixed	Fixed::operator*(const Fixed& f){
	Fixed result(this->toFloat() * f.toFloat());
	return result;
}

Fixed	Fixed::operator/(const Fixed& f){
	Fixed result(this->toFloat() / f.toFloat());
	return result;
}
