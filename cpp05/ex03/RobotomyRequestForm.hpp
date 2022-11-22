#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
 private:
  std::string _target;
 public:
  virtual void  execute(Bureaucrat const &executor) const;
  
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm& obj);
  ~RobotomyRequestForm();
  RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
};

#endif
