#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "===============생성부===============" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* a = new WrongAnimal();
	const WrongAnimal* b = new WrongCat();

	std::cout << std::endl << "===============실행부===============" << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	a->makeSound();
	b->makeSound();

	std::cout << std::endl << "===============소멸부===============" << std::endl;
	
	delete meta;
	delete j;
	delete i;
	delete a;
	delete b;
	
	return 0;
}