#include "Data.hpp"

int main(){
	Data* a = new Data(42);
	uintptr_t uintptr;

	std::cout << "===============데이터 만들기=============="<< std::endl;
	std::cout << "a           : " << a << std::endl;
	std::cout << "a's num     : " << a->getNum() << std::endl;
	std::cout << "==============시리얼라이즈 하기============"<< std::endl;
	uintptr = serialize(a);
	std::cout << "uintptr     : " << uintptr << std::endl;
	std::cout << "=============디시리얼라이즈 하기=========="<< std::endl;
	std::cout << "deserialize : " << deserialize(uintptr) << std::endl;
	std::cout << "deserialize : " << deserialize(uintptr)->getNum() << std::endl;
	

	delete a;
}