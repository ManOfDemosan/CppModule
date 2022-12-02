#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base* generate(){
	Base *base;

    std::srand(static_cast<unsigned int>(time(NULL)));
	int rand = std::rand();
	switch (rand)
	{
		case 0 :
			std::cout << "A is generated!" << std::endl; 
			base = new A;
			break;
		case 1 :
			std::cout << "B is generated!" << std::endl; 
			base = new B;
			break;
		default:
			std::cout << "C is generated!" << std::endl; 
			base = new C;
			break;
	}
	return (base);
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p){
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception& e) {
		(void)e;
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::exception& e) {
		(void)e;
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (std::exception& e) {
		(void)e;
	}
}

int main(){
	Base* base;
	std::cout << "=============생성부=============" << std::endl; 
	base = generate();
	std::cout << "=========포인터로 캐스팅========" << std::endl; 
	identify(base);
	std::cout << "=========참조자로 캐스팅========" << std::endl; 
	identify(*base);
}