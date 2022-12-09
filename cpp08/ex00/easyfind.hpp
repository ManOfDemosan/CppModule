#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int findVal){
	typename T::iterator i = std::find(container.begin(), container.end(), findVal);
	if (i == container.end())
		throw std::runtime_error("히잉 찾는거 없어잉ㅠㅠ");
	return i;
}

#endif
