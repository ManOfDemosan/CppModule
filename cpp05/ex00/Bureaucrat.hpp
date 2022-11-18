#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
 private:
	std::string	_name;
	unsigned int _grade;
 public:
  Bureaucrat();
  Bureaucrat(const Bureaucrat& obj);
  ~Bureaucrat();
  Bureaucrat& operator=(const Bureaucrat& obj);
};

#endif
