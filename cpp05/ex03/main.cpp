#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){

	std::cout << "=============Burea 정상 생성==========="<< std::endl;
    Bureaucrat a;
	std::cout << a << std::endl;
	std::cout << "=============Intern 생성및 일시키기==========="<< std::endl;

	Intern AnneHathaway;
	Form* shrubbery = AnneHathaway.makeForm("shrubbery", "Daemosan");
	Form* robotomy =  AnneHathaway.makeForm("robotomy", "채피");
	Form* daetong = AnneHathaway.makeForm("presidential", "Daetong");
	AnneHathaway.makeForm("돈벌어와", "Daetong");// 무리한 부탁
    std::cout << std::endl;
	std::cout << "=============Shrubbery 생성및 실행==========="<< std::endl;
	std::cout << *shrubbery << std::endl;
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