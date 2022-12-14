#include "Form.hpp"

Form::Form(std::string name, unsigned int sG, unsigned int eG): 
    _name(name), _signed(false), _signeGrade(sG), _execGrade(eG){
    if(eG < 1 || sG < 1){
        throw GradeTooHighException ();
    }
    if(eG > 150 || sG > 150){
        throw GradeTooLowException ();
    }
}

Form::Form() :
    _name("마키아벨리"), _signed(false), _signeGrade(1), _execGrade(1){
}

Form::Form(const Form& obj) :
_name(obj.getName()), _signed(obj._signed), _signeGrade(obj.getSigned()), _execGrade(obj.getExecGrade()){
}

Form& Form::operator=(const Form& obj) {
    this->_signed = obj.getSigned();
    *(const_cast<std::string*>(&this->_name)) = obj.getName();
    *(const_cast<unsigned int*>(&this->_signeGrade)) = obj.getSigneGrade();
    *(const_cast<unsigned int*>(&this->_execGrade)) = obj.getExecGrade();
    return (*this);
}

Form::~Form() {
}

std::string Form::getName() const{
    return(this->_name);
}

unsigned int     Form::getSigneGrade() const {
    return(this->_signeGrade);
}

unsigned int     Form::getExecGrade() const{
    return(this->_execGrade);
}

bool    Form::getSigned() const{
    return(this->_signed);
}

void    Form::beSigned(Bureaucrat& bu){
    if(bu.getGrade() <= this->_signeGrade && this->_signed == false)
        this->_signed = true;
    else{
        throw GradeTooLowException ();
    }

}

void Form::checkExecute(const Bureaucrat& executor) const {
	if (!this->_signed) {
		throw NonSignedFormException();
	} else if (executor.getGrade() > this->_execGrade) {
		throw GradeTooHighException();
	}
}

const char * Form::GradeTooHighException::what() const throw(){
    return("Grade Too High for Form");
}

const char * Form::GradeTooLowException::what() const throw(){
    return("Grade Too Low for Form");
}
const char * Form::NonSignedFormException::what() const throw()
{
	return ("Unsigned Form");
}


std::ostream&   operator<<(std::ostream& os, const Form& rhs)
{
	return (os 
    // << "Form name: " << rhs.getName() << std::endl
	// << "Form signe grade: " << rhs.getSigneGrade() << std::endl
	// << "Form exec grade: " << rhs.getExecGrade() << std::endl
	<< "***Form signed: " << rhs.getSigned() << std::endl);
}