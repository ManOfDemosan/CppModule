#include "PresidentialPardonForm.hpp"

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    checkExecute(executor);
    std::cout << this->_target << " received a special pardon" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form(target, 25, 5),_target(target){
}

PresidentialPardonForm::PresidentialPardonForm() :
Form("Default Shrubbery", 25, 5),_target("default"){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) :
Form("Copy Shrubbery", 25, 5),_target(obj._target){
}

PresidentialPardonForm::~PresidentialPardonForm() {   
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	std::cout << "Operator = in PRESIDENTIAL" << std::endl;
	this->_target = obj._target;
	return (*this);
}