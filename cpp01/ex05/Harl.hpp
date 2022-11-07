#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:
	std::string		_level[4];
	void			(Harl::*_ptrFunc[4])(void) const;

	void			_debug() const;
	void			_info() const;
	void			_warning() const;
	void			_error() const;
public:
	Harl();
	~Harl();
	void complain(std::string level);
};



# endif