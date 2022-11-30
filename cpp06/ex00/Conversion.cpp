#include "Conversion.hpp"

Conversion::Conversion(){}
Conversion::~Conversion() {}
Conversion::Conversion(const Conversion& obj) {*this = obj;}
Conversion& Conversion::operator=(const Conversion& obj) 
{
	if (this != &obj) {
		// _check = obj.checkError();
		_param = obj.getParam();
		_paramValue = obj.getParamValue();
	}
	return *this;
}

std::string Conversion::getParam() const {
	return _param;
}

double Conversion::getParamValue() const {
	return _paramValue;
}

Conversion::Conversion(std::string param): _param(param), _paramValue(0.0){
    char *ptr = NULL;
     _paramValue = std::strtod(_param.c_str(), &ptr);
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
	} else if (_param.length() == 1 && !isdigit(static_cast<char>(_param[0]))){
		os << "'" << _param << "'" << std::endl;
	} else {
		os << "non displayable" << std::endl;
	}
}

void Conversion::printInt(std::ostream &os) const {
	os << "int: ";
	if (_paramValue != _paramValue || _paramValue > std::numeric_limits<int>::max() || _paramValue < std::numeric_limits<int>::min()) {
		os << "impossible" << std::endl;
	} else if (_param.length() == 1 && !isdigit(static_cast<char>(_param[0]))){
		os << static_cast<int>(_param[0]) << std::endl;
	} else {
		os << toInt() << std::endl;
	}
}

void Conversion::printFloat(std::ostream &os) const {
	if (_param.length() == 1 && !isdigit(static_cast<char>(_param[0]))){
		os << "float: "<< static_cast<float>(_param[0]) << "f" << std::endl;
	} else if (toFloat() == static_cast<int64_t>(toFloat())) {
		os << "float: " << toFloat() << ".0f" << std::endl;
	} else {
		os << "float2: " << std::setprecision(std::numeric_limits<float>::digits10) << toFloat() << "f" << std::endl;
	}
}

void Conversion::printDouble(std::ostream &os) const {
	if (_param.length() == 1 && !isdigit(static_cast<char>(_param[0]))){
		os << "double: " << static_cast<double>(_param[0]) << ".0" << std::endl;
	}else if (toDouble() == static_cast<int64_t>(toDouble())) {
		os << "double: " << toDouble() << ".0" << std::endl;
	} else {
		os << "double: " << std::setprecision(std::numeric_limits<double>::digits10) << toDouble() << std::endl;
	}
}



const char* Conversion::ImpossibleException:: what() const throw(){
    return ("Impossible!");
}

std::ostream& operator<<(std::ostream& os, const Conversion& conversion) {

    conversion.printChar(os);
    conversion.printInt(os);
    conversion.printFloat(os);
    conversion.printDouble(os);
	return os;
}