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
    std::cout << this->_name << " will be UPgraded and..!" << std::endl;
    if(this->_grade - 1 < 1)
        throw GradeTooHighException();
    else
        --this->_grade;
}

void    Bureaucrat::deGrade(){
    std::cout << this->_name << " will be DEgraded and..!" << std::endl;
    if(this->_grade  + 1 > 150)
        throw GradeTooLowException();
    else
        ++this->_grade;
}

void    Bureaucrat::signeForm(Form &form){//여기서 if문 던지지 말고 try catch문 쓰기!
    try
    {
        form.beSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " couldn't signed " << form.getName() << " because " << e.what() << std::endl;
        return ;    
    }
    std::cout << this->_name << " signed " << form.getName() << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return("Grade Too High");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return("Grade Too Low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu){
    return os << bu.getName() << ", bureaucrat grade " <<bu.getGrade() << std::endl; 
}