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
  Bureaucrat(std::string name, unsigned int grade);
  ~Bureaucrat();
  Bureaucrat& operator=(const Bureaucrat& obj);

  std::string  getName() const;
  unsigned int  getGrade() const;
  void  upGrade();//등급이 올라가려면 마이너스
  void  deGrade();//등급이 떨어지려면 쁠러스

  class GradeTooLowException : public std::exception{
    const char * what() const throw();
  };

  class GradeTooHighException : public std::exception{
    const char * what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu);

#endif
