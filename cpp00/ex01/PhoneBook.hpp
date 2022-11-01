#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact[8];
		int		_nowIndex;
		void	_printPhone();
	public:
		void addContact();
		void searchPhonebook();
		PhoneBook();
		~PhoneBook();
	
};

#endif