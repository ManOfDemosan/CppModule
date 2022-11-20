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
  Bureaucrat(std::string name, unsigned int grade);//뉴
  ~Bureaucrat();
  Bureaucrat& operator=(const Bureaucrat& obj);

  std::string  getName() const;
  unsigned int  getGrade() const;

  class GradeTooLowException : public std::exception{
    const char * what() const throw();
  };

  class GradeTooHighException : public std::exception{
    const char * what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu);

#endif
