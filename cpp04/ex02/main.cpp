#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "===============생성부===============" << std::endl;
	Animal* animals[10];

	for (int i = 0; i < 5; ++i) {
		std::cout << i << std::endl;
		animals[i] = new Cat();
	}
	for (int i = 5; i < 10; ++i) {
		std::cout << i << std::endl;
		animals[i] = new Dog();
	}
	

	std::cout << std::endl << "===============소멸부1===============" << std::endl;
	
	for (int i = 0; i < 10; ++i) {
		std::cout << "destruct: " << i << std::endl;
		delete animals[i];
	}

	return 0;
}