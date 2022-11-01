#include "Contact.hpp"

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

std::string Contact::getLastName() const
{
	return this->_lastName;
}

std::string Contact::getNickName() const
{
	return this->_nickName;
}

std::string Contact::getPhoneNum() const
{
	return this->_phoneNum;
}

std::string Contact::getSecret() const
{
	return this->_secret;
}

void Contact::show(void) const
{
	std::cout << std::setw(20) << "First Name : " << getFirstName() << std::endl;
	std::cout << std::setw(20) << "Last Name : " << getLastName() << std::endl;
	std::cout << std::setw(20) << "Nick Name : " << getNickName() << std::endl;
	std::cout << std::setw(20) << "Phone Num : " << getPhoneNum() << std::endl;
	std::cout << std::setw(20) << "Secret : " << getSecret() << std::endl;

}

void Contact::setFirstName(std::string _firstName)
{
	this->_firstName = _firstName;
}

void Contact::setLastName(std::string _lastName)
{
	this->_lastName = _lastName;
}

void Contact::setNickName(std::string _nickName)
{
	this->_nickName = _nickName;
}

void Contact::setPhoneNum(std::string _phoneNum)
{
	this->_phoneNum = _phoneNum;
}

void Contact::setSecret(std::string _secret)
{
	this->_secret = _secret;
}

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}
