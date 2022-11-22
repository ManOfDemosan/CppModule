#include "Intern.hpp"

Form* Intern::makeForm(std::string type, std::string name){
  std::string formNames[3] = {"shrubbery", "robotomy", "presidential"};
	try {
		for (int i = 0; i < 3; i++) {
			if (type == formNames[i]) {
				std::cout << "AnneHathaway creates " << formNames[i] << " form" << std::endl;
				switch (i) {
					case 0:
						return new ShrubberyCreationForm(name);
					case 1:
						return new RobotomyRequestForm(name);
					case 2:
						return new PresidentialPardonForm(name);
				}
			}
		}
		throw Intern::CannotFind();
	} catch (Intern::CannotFind& e) {
		std::cout << "Intern failed to create form because " << e.what() << std::endl;
	}
	return NULL;
}

const   char* Intern::CannotFind::what() const throw(){
    return("저 인턴이라 그런거 못해용");
}

Intern::Intern() {
}

Intern::Intern(const Intern& obj) {
    static_cast<void>(obj);
}

Intern& Intern::operator=(const Intern& obj) {
    static_cast<void>(obj);
    return (*this);
}

Intern::~Intern() {
}