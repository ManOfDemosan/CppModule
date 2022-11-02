#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	phonebook;
	std::string	cmd;

	while(!std::cin.eof())
	{
		std::cout << "Plz enter command" << std::endl;
		std::getline(std::cin, cmd);
		if(cmd == "ADD")
			phonebook.addContact();
		else if(cmd == "SEARCH")
			phonebook.searchPeople();
		else if(cmd == "EXIT")
			break;
		else
			std::cout << "Wrong CMD consider again!" << std::endl;
	}
	return 0;
}