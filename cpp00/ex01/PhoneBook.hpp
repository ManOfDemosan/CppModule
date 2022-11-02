#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		_contact[8];
		int			_nowIndex;
		std::string	_cutTen(std::string);
		void 		_printPhonebook();
	public:
		void 		addContact();
		void		searchPeople();
		PhoneBook();
		~PhoneBook();
	
};

#endif