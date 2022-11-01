#include <iostream>
#include <iomanip>

int main ()
{
	// std::cout << std::setw(50) << std::setfill('=') << "=" << std::endl;
	// std::cout << std::setw(50) << std::setfill('=') << std::endl;
	std::cout << std::setw(43) << std::setfill('=') << "=" << std::endl;
	std::cout << std::setfill(' ') << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	std::cout << std::setw(43) << std::setfill('-') << "-" << std::endl;
	// std::cout << std::setfill(' ');	
}