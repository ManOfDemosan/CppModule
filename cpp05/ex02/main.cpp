#include "ShrubberyCreationForm.hpp"

int main(){

	std::cout << "=============Burea 정상 생성==========="<< std::endl;
    Bureaucrat a;
	Form* shrubbery = new ShrubberyCreationForm("Daemosan");
	std::cout << a;
    std::cout << std::endl;
	std::cout << "=============Shrubbery 생성및 실행==========="<< std::endl;
	std::cout << *shrubbery << std::endl;
	a.signeForm(*shrubbery);
	a.executeForm(*shrubbery);
	std::cout << *shrubbery << std::endl;
    std::cout << std::endl;
	std::cout << "=============Robotomy 생성및 실행==========="<< std::endl;

	std::cout << "=============대통령사면 생성및 실행==========="<< std::endl;


}