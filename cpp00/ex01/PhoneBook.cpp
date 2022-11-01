#include "PhoneBook.hpp"


void	PhoneBook::addContact()
{
	std::string tmp;

	std::cout << "Plz Type First Name" << std:: endl;
	std::getline(std::cin, tmp);
	this->_contact[_nowIndex].setFirstName(tmp);
	std::cout << "Plz Type Last Name" << std:: endl;
	std::getline(std::cin, tmp);
	this->_contact[_nowIndex].setLastName(tmp);
	std::cout << "Plz Type Nick Name" << std:: endl;
	std::getline(std::cin, tmp);
	this->_contact[_nowIndex].setNickName(tmp);
	std::cout << "Plz Type Phone Num" << std:: endl;
	std::getline(std::cin, tmp);
	this->_contact[_nowIndex].setPhoneNum(tmp);
	std::cout << "Shhhh... Secret" << std:: endl;
	std::getline(std::cin, tmp);
	this->_contact[_nowIndex].setSecret(tmp);
	if(_nowIndex == 7)
		_nowIndex = 0;
	else
		_nowIndex++;
}

void searchPhonebook()
{
	std::cout << std::setw(50) << std::setfill('=') << "=" << std::endl;

}



PhoneBook::PhoneBook()
{
	this->_nowIndex = 0;
}

PhoneBook::~PhoneBook()
{
	return ;	
}