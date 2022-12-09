#include "easyfind.hpp"
#include <vector>
#include <list>
#include <stack>


int main(){
	std::vector<int> test1;
	std::deque<int> test2;
	std::list<int> test3;
	
	int value;
	srand(time(NULL));


	std::cout << "랜덤 값 0 ~ 9까지 입력" << std::endl;
	for (int idx = 0; idx < 10; idx++) {
		value = rand() % 10;
		std::cout << value << std::endl;
		test1.push_back(value);
		test2.push_back(value);
		test3.push_back(value);
	}
	std::cout << "==========vector==========" << std::endl;
	try {
		int val = 1;
		std::cout << val << "찾을껴" << std::endl;
		std::cout << *(easyfind(test1, val)) << "있다!" << std::endl;
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "==========deque===========" << std::endl;
	try {
		int val = 2;
		std::cout << val << "찾을껴" << std::endl;
		std::cout << *(easyfind(test2, val)) << "있다!" << std::endl;
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===========list============" << std::endl;
	try {	
		int val = 3;
		std::cout << val << "찾을껴" << std::endl;
		std::cout << *(easyfind(test3, val)) << "있다!" << std::endl;
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}