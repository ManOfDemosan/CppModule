#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form(target, 145, 137),_target(target){

}

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("Default Shrubbery", 145, 137),_target("default"){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) :
Form("Copy Shrubbery", 145, 137),_target(obj._target){
}

ShrubberyCreationForm::~ShrubberyCreationForm() {   
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	std::cout << "Operator = in Shrubbery" << std::endl;
	this->_target = obj._target;
	return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    checkExecute(executor);

	std::ofstream output(this->_target + "_shrubbery");
	std::ifstream input("shrubbery");
	std::string line;

	if (!output.good() || !input.good()) {
		throw ShrubberyCreationForm::FailToOpen();
	}
	while (!input.eof()) {
		getline(input, line);
		output << line << std::endl;
	}
	input.close();
	output.close();
}

const char* ShrubberyCreationForm::FailToOpen::what() const throw() {
	return "Failed to open file";
}