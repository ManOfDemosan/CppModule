#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("마키아벨리"), _grade(1) {
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj.getName()) , _grade(obj.getGrade()){

}
Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade){
    if(_grade > 150)
        throw GradeTooLowException();
    else if(_grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
    this->_name = obj.getName();
    this->_grade = obj.getGrade();
    return (*this);
}

unsigned int    Bureaucrat::getGrade() const{
    return(this->_grade);
}

std::string Bureaucrat::getName() const{
    return(this->_name);
}

const char * Bureaucrat::GradeTooHighException



std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu){
    return os << bu.getName() << " , bureaucrat grade " <<bu.getGrade() << std::endl; 
}