#include "Conversion.hpp"

Conversion::Conversion(){}
Conversion::~Conversion() {}
Conversion::Conversion(const Conversion& obj) {*this = obj;}
Conversion& Conversion::operator=(const Conversion& obj) 
{
	if (this != &obj) {
		_check = obj.checkError();
		_param = obj.getParam();
		_paramValue = obj.getParamValue();
	}
	return *this;
}

bool Conversion::checkError() const {
	return _check;
}

std::string Conversion::getParam() const {
	return _param;
}

double Conversion::getParamValue() const {
	return _paramValue;
}

Conversion::Conversion(std::string param): _param(param), _paramValue(0.0), _check(false){
    try{
        char *ptr = NULL;
        _paramValue = std::strtod(_param.c_str(), &ptr);
        if(_paramValue == 0.0 && (_param[0] != '-' && _param[0] != '+' && !std::isdigit(_param[0]))){
            _check = true;
            return ;
        }
        if(*ptr && std::strcmp(ptr, "f")){
            _check = true;
            return ;
        }
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
}

char Conversion::toChar() const {
	return static_cast<char>(_paramValue);
}

int Conversion::toInt() const {
	return static_cast<int>(_paramValue);
}

float Conversion::toFloat() const {
	return static_cast<float>(_paramValue);
}

double Conversion::toDouble() const {
	return static_cast<double>(_paramValue);
}

void Conversion::printChar(std::ostream &os) const {
	os << "char: ";
	if (_paramValue != _paramValue || _paramValue > std::numeric_limits<char>::max() || _paramValue < std::numeric_limits<char>::min()) {
		os << "impossible" << std::endl;
	} else if (std::isprint(toChar())) {
		os << "'" << toChar() << "'" << std::endl;
	} else {
		os << "non displayable" << std::endl;
	}
}

void Conversion::printInt(std::ostream &os) const {
	os << "int: ";
	if (_paramValue != _paramValue || _paramValue > std::numeric_limits<int>::max() || _paramValue < std::numeric_limits<int>::min()) {
		os << "impossible" << std::endl;
	} else {
		os << toInt() << std::endl;
	}
}

void Conversion::printFloat(std::ostream &os) const {
	if (toFloat() == static_cast<int64_t>(toFloat())) {
		os << "float: " << toFloat() << ".0f" << std::endl;
	} else {
		os << "float: " << std::setprecision(std::numeric_limits<float>::digits10) << toFloat() << "f" << std::endl;
	}
}

void Conversion::printDouble(std::ostream &os) const {
	if (toDouble() == static_cast<int64_t>(toDouble())) {
		os << "double: " << toDouble() << ".0" << std::endl;
	} else {
		os << "double: " << std::setprecision(std::numeric_limits<double>::digits10) << toDouble() << std::endl;
	}
}



const char* Conversion::ImpossibleException:: what() const throw(){
    return ("Impossible!");
}

std::ostream& operator<<(std::ostream& os, const Conversion& conversion) {
	try{
        conversion.printChar(os);
        conversion.printInt(os);
        conversion.printFloat(os);
        conversion.printDouble(os);
    }
        catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
	return os;
}