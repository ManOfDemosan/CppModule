#include "Harl.hpp"

int main(){
	Harl harl;
	std::string level;

	std::cout << "What you want?(Synical)" << std::endl;
	while (std::getline(std::cin, level)){
		if(level == "bye"){
			std::cout << "good bye~" << std::endl;
			break ;
		}
		harl.complain(level);
		std::cout << "What you want! (again)" << std::endl;
	}
	return 0;
}