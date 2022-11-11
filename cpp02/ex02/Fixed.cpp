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
}

float	Fixed::toFloat() const{
	float f = static_cast<float>(_fixedPointNum) / (1 << this->_numOfFractionalBit);
	return(f);
}


std::ostream& operator<<(std::ostream& os, const Fixed &ref){
	os << ref.toFloat();
	return (os);
}

int	Fixed::getRawBits() const{
	return (this->_fixedPointNum);
}

void	Fixed::setRawBits(int set){
	this->_fixedPointNum = set;
}

bool	Fixed::operator>(const Fixed& f){
	return (this->_fixedPointNum > f.getRawBits());
}

bool	Fixed::operator<(const Fixed& f){
	return (this->_fixedPointNum < f.getRawBits());
}

bool	Fixed::operator>=(const Fixed& f){
	return (this->_fixedPointNum >= f.getRawBits());
}

bool	Fixed::operator<=(const Fixed& f){
	return (this->_fixedPointNum <= f.getRawBits());
}

bool	Fixed::operator==(const Fixed& f){
	return (this->_fixedPointNum == f.getRawBits());
}

bool	Fixed::operator!=(const Fixed& f){
	return (this->_fixedPointNum != f.getRawBits());
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

Fixed&	Fixed::operator++(){
	++this->_fixedPointNum;
	return(*this);
}

Fixed&	Fixed::operator--(){
	--this->_fixedPointNum;
	return(*this);
}

Fixed	Fixed::operator++(int){
	Fixed tmp = *this;
	++this->_fixedPointNum;
	return tmp;
}
Fixed	Fixed::operator--(int){
	Fixed tmp = *this;
	--this->_fixedPointNum;
	return tmp;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs){
	if(lhs > rhs)
		return rhs;
	return lhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs){
	if(lhs > rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs){
	if(lhs.getRawBits() > rhs.getRawBits())
		return rhs; 
	return lhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs){
	if(lhs.getRawBits() > rhs.getRawBits())
		return lhs; 
	return rhs;
}