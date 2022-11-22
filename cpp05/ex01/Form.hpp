#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
 private:
    std::string const _name;
    bool    _signed;
    unsigned int     _signeGrade;
    unsigned int     _execGrade;
 public:
    Form();
    Form(std::string name, unsigned int sG, unsigned int eG);
    Form(const Form& obj);
    ~Form();
    Form& operator=(const Form& obj);

    std::string getName() const;
    unsigned int     getSigneGrade() const;
    unsigned int     getExecGrade() const;
    bool    getSigned() const;
    void beSigned(Bureaucrat& bu);

    class GradeTooLowException : public std::exception{
    const char * what() const throw();
  };
    class GradeTooHighException : public std::exception{
    const char * what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif

