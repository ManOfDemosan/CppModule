#include "Conversion.hpp"

Conversion::Conversion() : _param("default") {}
Conversion::~Conversion() {}
Conversion::Conversion(const Conversion& obj) {*this = obj;}
Conversion& Conversion::operator=(const Conversion& obj) 
{
	if (this != &obj)
		this->_param = obj._param;
	return (*this);
}

Conversion::Conversion(std::string param): _param(param){
    checkParam();
}

void    Conversion::checkParam(){
    try{
        checkChar();
        // checkInt();
        // checkFloat();
        // checkDouble();
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}

void    Conversion::checkChar(){
    if(this->_param.length() == 1 && !isdigit(static_cast<char>(_param[0]))){
        this->_cParam = static_cast<char>(this->_param[0]);
        this->_paramValue = static_cast<double>(this->_cParam);
    }  
    else{
        this->_check = true;
        throw WorngParam();
    }
  
}

void Conversion::printChar(std::ostream &os) const {
    try{
    os << "char: " ;
		if (_check == true || !this->_param.compare("nan") || !this->_param.compare("nanf") || !this->_param.compare("inf") || !this->_param.compare("inff") || !this->_param.compare("+inf") || !this->_param.compare("+inff") || !this->_param.compare("-inf") || !this->_param.compare("-inff") || _paramValue < CHAR_MIN || _paramValue > CHAR_MAX)
			throw ImpossibleException();
		else
            os << '\'' << this->_cParam << '\'' << std::endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
const char* Conversion::WorngParam:: what() const throw(){
    return ("Wrong param!");
}
const char* Conversion::ImpossibleException:: what() const throw(){
    return ("Impossible!");
}


std::ostream& operator<<(std::ostream& os, const Conversion& converter) {
	converter.printChar(os);
	// converter.printInt(os);
	// converter.printFloat(os);
	// converter.printDouble(os);
	return os;
}