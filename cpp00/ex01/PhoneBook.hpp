#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		_contact[8];
		int			_nowIndex;
		std::string	cutTen(std::string);
	public:
		void 		_printPhonebook();
		void addContact();
		PhoneBook();
		~PhoneBook();
	
};

#endif