#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <iomanip>

class Conversion {
 private:
 std::string _param;
 double _paramValue;

 public:
  Conversion();
  Conversion(std::string param);
  Conversion(const Conversion& obj);
  ~Conversion();
  Conversion& operator=(const Conversion& obj);

  bool checkError() const;
  std::string getParam() const;
  double getParamValue() const;

  char  toChar() const;
  int   toInt() const;
  float toFloat() const;
  double toDouble() const;

  void  printChar(std::ostream &os) const;
  void  printInt(std::ostream &os) const;
  void  printFloat(std::ostream &os) const;
  void  printDouble(std::ostream &os) const;

  class ImpossibleException : public std::exception{
	public :
    const char* what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, const Conversion& rhs);

#endif
