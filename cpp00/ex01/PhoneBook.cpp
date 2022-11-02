#include "PhoneBook.hpp"


void	PhoneBook::addContact()
{
	int idx;

	idx = this->_nowIndex % 8;
	this->_contact[idx].setFirstName();
	this->_contact[idx].setLastName();
	this->_contact[idx].setNickName();
	this->_contact[idx].setPhoneNum();
	this->_contact[idx].setSecret();
	++this->_nowIndex;
}

std::string PhoneBook::_cutTen(std::string str)
{
	if	(str.length() > 10)
		return (str.substr(0, 9) + '.');
	else
		return (str);
}

void	PhoneBook::_printPhonebook()
{
	std::cout << std::setw(44) << std::setfill('=') << '=' << std::endl;
	std::cout << std::setfill(' ') << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	std::cout << std::setw(44) << std::setfill('-') << "-" << std::endl;
	std::cout << std::setfill(' ');
	for(int i = 0; i < std::min(this->_nowIndex, 8); i++)
	{
		std::cout << std::setw(10) << i + 1 <<"|";
		std::cout << std::setw(10) << _cutTen(this->_contact[i].getFirstName()) << "|";
		std::cout << std::setw(10) << _cutTen(this->_contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << _cutTen(this->_contact[i].getNickName()) << "|" << std::endl;
	}
	std::cout << std::setw(44) << std::setfill('=') << "=" << std::endl;
	std::cout << std::setfill(' ');
}

void	PhoneBook::searchPeople()
{
	int phone_index;

	this->_printPhonebook();
	if(this->_nowIndex == 0)
	{
		std::cout << "NOTHING IN THE PHONEBOOK!" << std::endl;
		return ;
	}
	while(1)
	{
		std::cout << "What Index you want?";
		std::cin >> phone_index;
		if (std::cin.eof())
			return ;
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Only numeric number!"<< std::endl;
		}
		else if (phone_index > this->_nowIndex || phone_index < 1)
			std::cout << "Index out of range!" << std::endl;
		else
			break;
	}
	std::cin.ignore();
	std::cout << std::endl;
	this->_contact[phone_index - 1].show();
	std::cout << std::endl;

}

PhoneBook::PhoneBook()
{
	this->_nowIndex = 0;
}

PhoneBook::~PhoneBook()
{
	return ;	
}