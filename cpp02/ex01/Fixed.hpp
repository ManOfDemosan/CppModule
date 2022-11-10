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

 	float toFloat() const;
	int toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &ref);
# endif