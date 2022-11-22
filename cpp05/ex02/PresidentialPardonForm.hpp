#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
 private:
 public:
  PresidentialPardonForm();
  PresidentialPardonForm(const PresidentialPardonForm& obj);
  ~PresidentialPardonForm();
  PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
};

#endif

