#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	phonebook;
	std::string	cmd;

	while(!std::cin.eof())
	{
		std::cout << "Plz enter command" << std::endl;
		std::getline(std::cin, cmd);
		if(cmd == "ADD" || cmd == "add")
			phonebook.addContact();
		else if(cmd == "SEARCH" || cmd == "search")
			std::cout << "search" << std::endl;// 탐색함수
		else if(cmd == "EXIT" || cmd == "exit")
			break;
		else
			std::cout << "Wrong CMD consider again!" << std::endl;
	}
	return 0;
}