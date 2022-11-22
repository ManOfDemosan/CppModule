#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("마키아벨리"), _grade(1) {
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj.getName()) , _grade(obj.getGrade()){

}
Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade){
    if(_grade > 150)
        throw GradeTooLowException();
    else if(_grade <= 0)
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

void    Bureaucrat::upGrade(){
    if(this->_grade - 1 < 1)
        throw GradeTooHighException();
    else
        --this->_grade;
}

void    Bureaucrat::deGrade(){
    if(this->_grade - 1 > 150)
        throw GradeTooLowException();
    else
        ++this->_grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return(" Grade Too High");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return(" Grade Too Low");
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu){
    return os << bu.getName() << " , bureaucrat grade " <<bu.getGrade() << std::endl; 
}