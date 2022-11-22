#include "RobotomyRequestForm.hpp"

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    checkExecute(executor);
    std::srand(static_cast<unsigned int>(time(NULL)));
	int rand = std::rand();
	if (rand % 2) {
		std::cout << this->_target << " 브르ㅡ르르르ㅡ르르르르르르ㅡ르르르..." << std::endl;
	} else {
		std::cout << "failed to make some noize " << this->_target << std::endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form(target, 72, 45),_target(target){
}

RobotomyRequestForm::RobotomyRequestForm() :
Form("Default Shrubbery", 72, 45),_target("default"){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) :
Form("Copy Shrubbery", 72, 45),_target(obj._target){
}

RobotomyRequestForm::~RobotomyRequestForm() {   
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	std::cout << "Operator = in Robotomy" << std::endl;
	this->_target = obj._target;
	return (*this);
}