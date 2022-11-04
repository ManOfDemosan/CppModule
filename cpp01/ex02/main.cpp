#include <iostream>
#include <iomanip>

int main(){
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;
	
	std::cout << std::setw(49) << std::setfill('=') << '=' << std::endl;
	std::cout << &str << " is address of the string variable" << std::endl;
	std::cout << stringPTR << " is address held by stringPTR" << std::endl;
	std::cout << &stringREF << " is address held by stringREF" << std::endl;
	std::cout << std::setw(49) << std::setfill('=') << '=' << std::endl;
	std::cout << str << " is value of the string variable"<< std::endl;
	std::cout << *stringPTR << " is value pointed to by stringPTR"<< std::endl;
	std::cout << stringREF << " is value of the string variable"<< std::endl;
	std::cout << std::setw(49) << std::setfill('=') << '=' << std::endl;

}