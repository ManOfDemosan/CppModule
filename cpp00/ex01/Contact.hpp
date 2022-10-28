#ifndef CONTACT_HPP
# define CONTACT_HPP

#include<iostream>

class Contact
{
	private:
		// std::string index; 이거는 폰북으로 index로 넘어가야한다.
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNum;
		std::string _secret;
	public:
		std::string getFirstName() const;

};

#endif