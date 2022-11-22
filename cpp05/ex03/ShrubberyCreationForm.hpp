#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
 private:
    std::string _target;
 public:
   virtual void  execute(Bureaucrat const &executor) const;

   ShrubberyCreationForm(std::string target);
   ShrubberyCreationForm();
   ShrubberyCreationForm(const ShrubberyCreationForm& obj);
   ~ShrubberyCreationForm();
   ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
   class FailToOpen : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
