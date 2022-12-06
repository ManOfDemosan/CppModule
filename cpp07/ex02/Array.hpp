#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
 private:
    T *_array;
    unsigned int _len;

 public:
 //operator 친구들
  Array& operator=(const Array& obj){
	delete[] _array;
	_array = new T[obj.size()];
	_len = obj.size();
	for (unsigned int i = 0; i < _len; i++)
	    _array[i] = obj._array[i];
	return (*this);

  };

  T& operator[](unsigned int i){
      if(i < 0 || i >= _len){
        throw OutOfRange();
      }
    return (_array[i]);
  };
 // size and getter
 unsigned int size(void) const{
	return (this->_len);
 };

 T* getArray(){
    return (this->_array);
 };
 //생성자 친구들
  Array():_array(new T[0]), _len(0){};
  Array(unsigned int param): _len(param){
    if(param < 0)
        throw OutOfRange();
    _array = new T[param];
  };

  Array(const Array& obj): _len(obj.size()){
    _array = new T[obj.size()];
    for (unsigned int i = 0; i < _len; i++)
        _array[i] = obj._array[i];
  };

// 소멸자 친구들 
  ~Array(){
    delete [] _array;
  };

  //예외친구 
  class OutOfRange : public std::exception{
	public :
    const char* what() const throw(){
        return("Out Of Range");
    };
  };
  
};

#endif

