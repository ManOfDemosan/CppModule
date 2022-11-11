#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fixedPointNum;
	static const int	_numOfFractionalBit = 8;
	
public:
	Fixed();
	Fixed(const Fixed &ref);
	Fixed(const int i);
	Fixed(const float f);
	Fixed& operator=(const Fixed &ref);
	~Fixed();

	//6 comparison operators
	bool	operator>(const Fixed& f);
	bool	operator<(const Fixed& f);
	bool	operator>=(const Fixed& f);
	bool	operator<=(const Fixed& f);
	bool	operator==(const Fixed& f);
	bool	operator!=(const Fixed& f);

	//4 arithmetic operators
	Fixed	operator+(const Fixed& f);
	Fixed	operator-(const Fixed& f);
	Fixed	operator*(const Fixed& f);
	Fixed	operator/(const Fixed& f);

	// 4 increment/decrement operators 

	int	getBit() const;
	void	setBit(int setbit);
 	float toFloat() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &ref);

#endif