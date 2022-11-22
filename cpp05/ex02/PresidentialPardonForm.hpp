#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
 private:
  std::string _target;
 public:
  virtual void  execute(Bureaucrat const &executor) const;
  
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm();
  PresidentialPardonForm(const PresidentialPardonForm& obj);
  ~PresidentialPardonForm();
  PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
};

#endif

