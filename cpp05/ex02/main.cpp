#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

	std::cout << "=============Burea 정상 생성==========="<< std::endl;
    Bureaucrat a;
	Form* shrubbery = new ShrubberyCreationForm("Daemosan");
	Form* robotomy = new RobotomyRequestForm("Robo");
	Form* daetong = new PresidentialPardonForm("DaeTong");
	std::cout << a;
    std::cout << std::endl;
	std::cout << "=============Shrubbery 생성및 실행==========="<< std::endl;
	a.signeForm(*shrubbery);
	a.executeForm(*shrubbery);
	std::cout << *shrubbery << std::endl;
    std::cout << std::endl;
	std::cout << "=============Robotomy 생성및 실행==========="<< std::endl;
	std::cout << *robotomy << std::endl;
	a.signeForm(*robotomy);
	a.executeForm(*robotomy);
	std::cout << *robotomy << std::endl;
    std::cout << std::endl;
	std::cout << "=============대통령사면 생성및 실행==========="<< std::endl;
	std::cout << *daetong << std::endl;
	a.signeForm(*daetong);
	a.executeForm(*daetong);
	std::cout << *daetong<< std::endl;
    std::cout << std::endl;
	delete shrubbery;
	delete robotomy;
	delete daetong;
}