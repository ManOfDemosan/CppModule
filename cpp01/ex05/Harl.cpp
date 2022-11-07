#include "Harl.hpp"

Harl::Harl(){
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	this->_ptrFunc[0] = &Harl::_debug;
	this->_ptrFunc[1] = &Harl::_info;
	this->_ptrFunc[2] = &Harl::_warning;
	this->_ptrFunc[3] = &Harl::_error;
}

Harl::~Harl(){
}

void	Harl::_debug() const{
	std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::_info() const{
	std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::_error() const{
	std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now" << std::endl;
	return ;
}

void	Harl::_warning() const{
	std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(this->_level[i]) == 0)
		{
			(this->*_ptrFunc[i])();
			return ;
		}
	}
	std::cout << "Harl have nothing to say" << std::endl;
	return ;
}