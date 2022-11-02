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
	std::cout << std::setw(20) << "First Name : " << this->getFirstName() << std::endl;
	std::cout << std::setw(20) << "Last Name : " << this->getLastName() << std::endl;
	std::cout << std::setw(20) << "Nick Name : " << this->getNickName() << std::endl;
	std::cout << std::setw(20) << "Phone Num : " << this->getPhoneNum() << std::endl;
	std::cout << std::setw(20) << "Secret : " << this->getSecret() << std::endl;

}

void Contact::setFirstName()
{
	std::cout << "first name : ";
	std::getline(std::cin, this->_firstName);
	if (this->_firstName.length() <= 0)
		this->setFirstName();
}

void Contact::setLastName()
{
	std::cout << "last name : ";
	std::getline(std::cin, this->_lastName);
	if (this->_lastName.length() <= 0)
		this->setLastName();
}

void Contact::setNickName()
{
	std::cout << "nick name : ";
	std::getline(std::cin, this->_nickName);
	if (this->_nickName.length() <= 0)
		this->setNickName();
}

void Contact::setPhoneNum()
{
	std::cout << "phone num : ";
	std::getline(std::cin, this->_phoneNum);
	if (this->_phoneNum.length() <= 0)
		this->setPhoneNum();
}

void Contact::setSecret()
{
	std::cout << "Shhhh... Secret : ";
	std::getline(std::cin, this->_secret);
	if (this->_secret.length() <= 0)
		this->setSecret();
}

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}
