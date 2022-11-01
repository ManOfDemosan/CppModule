#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

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
		Contact();
		~Contact();
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNum() const;
		std::string getSecret() const;
		void setFirstName(std::string _firstName);
		void setLastName(std::string _lastName);
		void setNickName(std::string _nickName);
		void setPhoneNum(std::string _phoneNum);
		void setSecret(std::string _secret);
		void show() const;
};

#endif