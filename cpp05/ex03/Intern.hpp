#ifndef INTERN_HPP
#define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
 private:
 public:
  Form* makeForm(std::string type, std::string name);

  class CannotFind : public std::exception {
			public:
				const char* what() const throw();
	};
  Intern();
  Intern(const Intern& obj);
  ~Intern();
  Intern& operator=(const Intern& obj);
};

#endif
