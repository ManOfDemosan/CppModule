#include "Data.hpp"

Data::Data():_num(0) {}
Data::Data(const Data& obj): _num(obj._num) {}
Data::~Data() {}
Data& Data::operator=(const Data& obj) {
	if(this != &obj)
		_num = obj.getNum();
	return(*this);
}

Data::Data(int num): _num(num) {
}

int Data::getNum() const {
	return (_num);
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}