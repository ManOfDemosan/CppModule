#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main(){
	std::cout << "============MUTANT STACK============"<< std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout <<"제일 위에있는 17이 날라감"<<std::endl;
	std::cout << "stack 의 size는 "<< mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::cout << "============LIST============"<< std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3); 
	list.push_back(5); 
	list.push_back(737); //[...] mstack.push(0);
	std::list<int>::iterator it1 = list.begin();
	std::list<int>::iterator ite2 = list.end();
	++it1;
	--it1;
	while (it1 != ite2) {
		std::cout << *it1 << std::endl;
		++it1; 
	} 
return 0;
}