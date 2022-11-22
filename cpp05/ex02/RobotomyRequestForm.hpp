#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
 private:
 public:
  RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm& obj);
  ~RobotomyRequestForm();
  RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
};

#endif
