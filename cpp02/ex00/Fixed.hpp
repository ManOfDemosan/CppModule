#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fixedPointNum;
	static const int	_numOfFractionalBit = 8;
public:
	int getRawBits() const;
	void setRawBits(int const raw);

	Fixed();
	Fixed(const Fixed &ref);
	~Fixed();
	Fixed& operator=(const Fixed &ref);

};




# endif