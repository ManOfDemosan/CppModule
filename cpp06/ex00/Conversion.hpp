#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include <climits>
#include <cmath>

class Conversion {
 private:
 std::string _param;
 char _cParam;
 double _paramValue;
 bool   _check;
 public:
  Conversion();
  Conversion(std::string param);
  Conversion(const Conversion& obj);
  ~Conversion();
  Conversion& operator=(const Conversion& obj);

  void  checkParam();
  void  checkChar();
  // void  checkInt();
  // void  checkFloat();
  // void  checkDouble();

  // char  toChar() const;
  void  printChar(std::ostream &os) const;

  class WorngParam : public std::exception{
	public :
    const char* what() const throw();
  };
  class ImpossibleException : public std::exception{
	public :
    const char* what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, const Conversion& rhs);

#endif
