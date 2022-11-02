#include <iostream>
#include <iomanip>

std::string cutTen(std::string str)
{
	if	(str.length() > 10)
		return (str.substr(0, 9) + '.');
	else
		return (str);
}

int main ()
{
	int i = 0;
	std::cout << cutTen("1234567890abc") << std::endl;
	std::cout << std::setw(10) << i + 1 <<"|";

	// std::cout << std::setw(50) << std::setfill('=') << "=" << std::endl;
	// std::cout << std::setw(50) << std::setfill('=') << std::endl;
	// std::cout << std::setw(43) << std::setfill('=') << "=" << std::endl;
	// std::cout << std::setfill(' ') << std::setw(10) << "INDEX" << "|";
	// std::cout << std::setw(10) << "FIRST NAME" << "|";
	// std::cout << std::setw(10) << "LAST NAME" << "|";
	// std::cout << std::setw(10) << "NICKNAME" << std::endl;
	// std::cout << std::setw(43) << std::setfill('-') << "-" << std::endl;
	// std::cout << std::setfill(' ');	
}