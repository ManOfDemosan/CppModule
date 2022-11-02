#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNum;
		std::string _secret;
	public:
		Contact();
		~Contact();
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNum() const;
		std::string getSecret() const;
		void setFirstName();
		void setLastName();
		void setNickName();
		void setPhoneNum();
		void setSecret();
		void show() const;
};

#endif